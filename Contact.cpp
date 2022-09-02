#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

#define MAX 100
struct Person {
	string name;
	int age;
	int sex;
	string tele;
	string addr;
};
struct Contact {
	struct Person personArr[MAX];
	int size;
};
void menu() {
	cout << "*******************************************" << endl;
	cout << "**********       Contact      *************" << endl;
	cout << "**********    1.新增联系人    *************" << endl;
	cout << "**********    2.显示联系人    *************" << endl;
	cout << "**********    3.删除联系人    *************" << endl;
	cout << "**********    4.查找联系人    *************" << endl;
	cout << "**********    5.修改联系人    *************" << endl;
	cout << "**********    6.清空联系人    *************" << endl;
	cout << "**********    0.退出通讯录    *************" << endl;
	cout << "*******************************************" << endl;
}
int Search_by_name(const Contact*ps,string name){
	int i = 0;
	int ret = -1;
	for (i = 0; i < ps->size; i++) {
		if (name == ps->personArr[i].name) {
			ret = i;
			break;
		}
	}
	return ret;
}
void AddPerson(Contact* ps) {
	if (ps->size == MAX) {
		cout << "通讯录已满，无法继续添加。" << endl;
		return;
	}
	else {
		cout << "请输入联系人姓名：" ;
		cin >> ps->personArr[ps->size].name;
		cout << "请输入联系人年龄：" ;
		cin >> ps->personArr[ps->size].age;
		cout << "请输入联系人性别（1为男，2为女）：" ;
		while (1) {
			cin >> ps->personArr[ps->size].sex;
			if (ps->personArr[ps->size].sex == 1 || ps->personArr[ps->size].sex == 2) {
				break;
			}
			else
				cout << "输入错误，请重新输入：";
		}
		cout << "请输入联系人电话：" ;
		cin >> ps->personArr[ps->size].tele;
		cout << "请输入联系人地址：";
		cin >> ps->personArr[ps->size].addr;
		cout << "添加成功。" << endl;
		ps->size++;
	}
}
void ShowContact(const Contact* ps) {
	int i = 0;
	cout << "姓名\t" << "年龄\t" << "性别\t" << "电话\t" << "地址" << endl;
	for (i = 0; i < ps->size; i++)
	{
		cout << ps->personArr[i].name << "\t";
		cout << ps->personArr[i].age << "\t";
		if (ps->personArr[i].sex == 1) {
			cout << "男" << "\t";
		}
		else if (ps->personArr[i].sex == 2) {
			cout << "女" << "\t";
		}
		cout << ps->personArr[i].tele << "\t";
		cout << ps->personArr[i].addr << endl;
	}
}
void DelContact(Contact* ps) {
	string Search_name;
	cout << "请输入要删除联系人的姓名：";
	cin >> Search_name;
	int ret = Search_by_name(ps, Search_name);
	if (ret == -1) {
		cout << "未查找到此人。" << endl;
	}
	else {
		for (int i = ret; i < ps->size; i++) {
			ps->personArr[i] = ps->personArr[i + 1];
		}
		ps->size--;
		cout << "删除成功。" << endl;
	}
}
void SearchContact(const Contact* ps) {
	string Search_name;
	cout << "请输入要查找人的姓名：";
	cin >> Search_name;
	int ret = Search_by_name(ps, Search_name);
	if (ret == -1) {
		cout << "未查找到此人。" << endl;
	}
	else {
		cout << "姓名\t" << "年龄\t" << "性别\t" << "电话\t" << "地址" << endl;
		cout << ps->personArr[ret].name << "\t" << ps->personArr[ret].age << "\t";
		if (ps->personArr[ret].sex == 1) {
			cout << "男" << "\t";
		}
		else if (ps->personArr[ret].sex == 2) {
			cout << "女" << "\t";
		}
		cout << ps->personArr[ret].tele << "\t" << ps->personArr[ret].addr << endl;
	}
}
void ModifyContact(Contact* ps) {
	string Search_name;
	cout << "请输入要查找人的姓名：";
	cin >> Search_name;
	int ret = Search_by_name(ps, Search_name);
	if (ret == -1) {
		cout << "未查找到此人。" << endl;
	}
	else {
		cout << "请输入联系人姓名：";
		cin >> ps->personArr[ret].name;
		cout << "请输入联系人年龄：";
		cin >> ps->personArr[ret].age;
		cout << "请输入联系人性别（1为男，2为女）：";
		while (1) {
			cin >> ps->personArr[ret].sex;
			if (ps->personArr[ret].sex == 1 || ps->personArr[ret].sex == 2) {
				break;
			}
			else
				cout << "输入错误，请重新输入：";
		}
		cout << "请输入联系人电话：";
		cin >> ps->personArr[ret].tele;
		cout << "请输入联系人地址：";
		cin >> ps->personArr[ret].addr;
		cout << "修改成功。" << endl;
	}
}
void CleanContact(Contact* ps) {
	ps->size = 0;
	cout << "已清空联系人。" << endl;
}

//1增，2显示，3删，4查，5改，6清空，0退出

int main() {
	int input = 0;
	Contact abs;
	abs.size = 0;
	while (1) {
		menu();
		cout << "请输入选项：";
		cin >> input;
		switch (input)
		{
		case 1:
			AddPerson(&abs);
			break;
		case 2:
			ShowContact(&abs);
			break;
		case 3:
			DelContact(&abs);
			break;
		case 4:
			SearchContact(&abs);
			break;
		case 5:
			ModifyContact(&abs);
			break; 
		case 6:
			CleanContact(&abs);
			break;
		case 0:
			cout << "退出通讯录。欢迎下次使用。" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入错误，请重新输入：" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}
