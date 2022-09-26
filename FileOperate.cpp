#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//void test01() {
//	ofstream ofs;
//	ofs.open("StudentInfo.txt", ios::out);
//
//	ofs << "姓名：张三" << endl;
//	ofs << "年龄：18" << endl;
//	ofs << "性别：男" << endl;
//	ofs.close();
//	
//	ifstream ifs;
//	ifs.open("StudentInfo.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败。" << endl;
//		return;
//	}
//
//	char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}
//
//	while (ifs.getline(buf, sizeof(buf))) {
//		cout << buf << endl;
//	}
//	string buf1;
//
//	while (getline(ifs, buf1)) {
//		cout << buf << endl;
//	}
//	char c;
//	while ((c = ifs.get()) != EOF) {
//		cout << c;
//	}
//
//	ifs.close();
//}
//
//int main() {
//	test01();
//	return 0;
//}

class Person {
public:
	char m_Name[64];
	int m_Age;
};

void test01() {
	Person p1 = { "zhangsan", 18 };
	
	ofstream ofs;
	ofs.open("Person", ios::out | ios::binary);
	ofs.write((const char*)&p1, sizeof(Person));
	ofs.close();

	ifstream ifs;
	ifs.open("Person", ios::in | ios::binary);
	if (ifs.is_open() == 0) {
		cout << "文件打开失败。" << endl;
		return;
	}

	char buf[1024];
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_Name << endl;
	cout << p.m_Age << endl;
	
	ifs.close();

}

int main() {
	test01();

	return 0;
}