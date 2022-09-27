#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class CDate {
private:
	int m_Year;
	int m_Month;
	int m_Day;
public:
	CDate();
	CDate(int Year, int Month, int Day);
	int GetYear()const;
	int GetMonth()const;
	int GetDay()const;
	void DisplayInfo()const;
};
CDate::CDate() {
	m_Year = m_Month = m_Day = 0;
}
CDate::CDate(int Year, int Month, int Day) {
	m_Year = Year;
	m_Month = Month;
	m_Day = Day;
}
int CDate::GetYear()const {
	return m_Year;
}
int CDate::GetMonth()const {
	return m_Month;
}
int CDate::GetDay()const {
	return m_Day;
}
void CDate::DisplayInfo()const {
	cout << m_Year << '.' << m_Month << '.' << m_Day << endl;
}

class CPerson {
protected:
	char* m_strName;
	char* m_strID;
	char m_Sex;
	CDate m_Birthday;
public:
	CPerson();
	CPerson(const char* strName,const char* strID ,char Sex , int Year = 0, int Month = 0, int Day = 0);
	~CPerson();
	void SetName(char* strName);
	void GetName(char* strName)const;
	void SetID(char* strID);
	void GetID(char* strID)const;
	void SetSex(char Sex);
	void GetSex(char& Sex)const;
	void SetBirthday(const CDate& Birthday);
	CDate GetBirthday()const;
	void DisplayInfo()const;
	virtual void WriteFile(ofstream &ofs);
	virtual void ReadFile(ifstream &ifs);

};
CPerson::CPerson() {
	m_strName = new char[64];
	m_strID = new char[64];
	m_Sex = '0';
}
CPerson::CPerson(const char* strName ,const char* strID ,char Sex , int Year , int Month , int Day ) : m_Birthday(Year, Month, Day) {
	m_strName = new char[strlen(strName) + 1];
	m_strID = new char[strlen(strID) + 1];
	strcpy(m_strName, strName);
	strcpy(m_strID, strID);
	m_Sex = Sex;	
}
CPerson::~CPerson() {
	delete[] m_strName;
	delete[] m_strID;
}
void CPerson::SetName(char* strName) {
	delete[] m_strName;
	m_strName = new char[strlen(strName) + 1];
	strcpy(m_strName, strName);
}
void CPerson::GetName(char* strName)const {
	strcpy(strName, m_strName);
}
void CPerson::SetID(char* strID) {
	delete[] m_strID;
	m_strID = new char[strlen(strID) + 1];
	strcpy(m_strID, strID);
}
void CPerson::GetID(char* strID)const {
	strcpy(strID, m_strID);
}
void CPerson::SetSex(char Sex) {
	m_Sex = Sex;
}
void CPerson::GetSex(char& Sex)const {
	Sex = m_Sex;
}
void CPerson::SetBirthday(const CDate& Birthday) {
	m_Birthday = Birthday;
}
CDate CPerson::GetBirthday()const{
	return m_Birthday;
}
void CPerson::DisplayInfo()const {
	cout << "姓名为:" << m_strName << "，编号为：" << m_strID << "，性别为：";
	if (m_Sex == '1')
		cout << "男";
	if (m_Sex == '2')
		cout << "女";
	if (m_Sex == '0')
		cout << "未知";
	cout << "，出生日期为：";
	m_Birthday.DisplayInfo();
};
void CPerson::WriteFile(ofstream &ofs) {
	ofs << m_strName << endl;
	ofs << m_strID << ' ' << m_Sex << ' ' << m_Birthday.GetYear() << ' ' << m_Birthday.GetMonth() << ' ' << m_Birthday.GetDay();
}
void CPerson::ReadFile(ifstream &ifs) {
	int Year, Month, Day;
	char strName[256], strID[256],Sex;
	ifs.getline(strName, 256);
	ifs >> strID >> Sex >> Year >> Month >> Day;
	//delete[] m_strName;
	m_strName = new char[strlen(strName) + 1];
	strcpy(m_strName, strName);
	//delete[] m_strID;
	m_strID = new char[strlen(strID) + 1];
	strcpy(m_strID, strID);
	strcpy(&m_Sex, &Sex);
	CDate Birthday(Year, Month, Day);
	m_Birthday = Birthday;
}



class CStudent :public CPerson {
	static unsigned int m_Count;
protected:
	char* m_strMajor;
public:
	CStudent();
	CStudent(const char* strName,const char* strID ,char Sex ,const char* strMajor,int Year = 0, int Month = 0, int Day = 0 );
	~CStudent();
	void SetMajor(char* strMajor);
	void GetMajor(char* strMajor)const;
	void DisplayInfo()const;
	static unsigned int GetCount();
	void WriteFile(ofstream &ofs);
	void ReadFile(ifstream &ifs);

};
CStudent::CStudent() {
	m_strMajor = new char[64];
}
CStudent::CStudent(const char* strName , const char* strID , char Sex ,const char* strMajor, int Year , int Month , int Day ) :CPerson(strName, strID, Sex, Year, Month, Day) {
	m_strMajor = new char[strlen(strMajor) + 1];
	strcpy(m_strMajor, strMajor);
	m_Count++;
}
CStudent::~CStudent() {
	delete[] m_strMajor;
	m_Count--;
}
void CStudent::SetMajor(char* strMajor) {
	delete[] m_strMajor;
	m_strMajor = new char[strlen(strMajor) + 1];
	strcpy(m_strMajor, strMajor);
}
void CStudent::GetMajor(char* strMajor)const {
	strcpy(strMajor, m_strMajor);
}
void CStudent::DisplayInfo()const {
	CPerson::DisplayInfo();
	cout << "专业是：" << m_strMajor;
}
unsigned int CStudent::GetCount() {
	return m_Count;
}
void CStudent::WriteFile(ofstream &ofs) {
	CPerson::WriteFile(ofs);
	ofs << m_strMajor << endl;
}
void CStudent::ReadFile(ifstream& ifs) {
	CPerson::ReadFile(ifs);
	char strMajor[256];
	ifs.getline(strMajor, 256);
	//delete[] m_strMajor;
	m_strMajor = new char[strlen(strMajor) + 1];
	strcpy(m_strMajor, strMajor);
}
unsigned int CStudent::m_Count = 0;


int main() {
	CStudent stu1 = {"zhangsan","12022222",'1',"kongzhi",2000,12,8};
	CStudent stu2("lisi", "12022223", '2',"gongye",2001, 9, 8);
	CStudent stu3("wangwu", "12022224", '2',"ruanjian", 1999, 11, 11);
	//把Stu的数据写到StudentInfo.txt文件中
	ofstream ofs("StudentInfo.txt");
	if (ofs.fail()) {
		cout << "打开文件失败。" << endl;
		return 1;
	}
	stu1.WriteFile(ofs);
	stu2.WriteFile(ofs);
	stu3.WriteFile(ofs);
	ofs.close();
	//输入流关闭，从StudentInfo.txt文件中读文件
	ifstream ifs("StudentInfo.txt");
	if (ifs.fail()) {
		cout << "打开文件失败。" << endl;
		return 1;
	}
	//创建三个Stu接收读到的内容
	CStudent stu1_copy, stu2_copy, stu3_copy;
	stu1_copy.ReadFile(ifs);
	stu2_copy.ReadFile(ifs);
	stu3_copy.ReadFile(ifs);
	ifs.close();

	stu1_copy.DisplayInfo();
	cout << endl;
	stu2_copy.DisplayInfo();
	cout << endl;
	stu3_copy.DisplayInfo();
	cout << endl;

	cout << CStudent::GetCount() << endl;
	return 0;
}