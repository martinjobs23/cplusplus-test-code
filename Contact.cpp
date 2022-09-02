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
	cout << "**********    1.������ϵ��    *************" << endl;
	cout << "**********    2.��ʾ��ϵ��    *************" << endl;
	cout << "**********    3.ɾ����ϵ��    *************" << endl;
	cout << "**********    4.������ϵ��    *************" << endl;
	cout << "**********    5.�޸���ϵ��    *************" << endl;
	cout << "**********    6.�����ϵ��    *************" << endl;
	cout << "**********    0.�˳�ͨѶ¼    *************" << endl;
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
		cout << "ͨѶ¼�������޷�������ӡ�" << endl;
		return;
	}
	else {
		cout << "��������ϵ��������" ;
		cin >> ps->personArr[ps->size].name;
		cout << "��������ϵ�����䣺" ;
		cin >> ps->personArr[ps->size].age;
		cout << "��������ϵ���Ա�1Ϊ�У�2ΪŮ����" ;
		while (1) {
			cin >> ps->personArr[ps->size].sex;
			if (ps->personArr[ps->size].sex == 1 || ps->personArr[ps->size].sex == 2) {
				break;
			}
			else
				cout << "����������������룺";
		}
		cout << "��������ϵ�˵绰��" ;
		cin >> ps->personArr[ps->size].tele;
		cout << "��������ϵ�˵�ַ��";
		cin >> ps->personArr[ps->size].addr;
		cout << "��ӳɹ���" << endl;
		ps->size++;
	}
}
void ShowContact(const Contact* ps) {
	int i = 0;
	cout << "����\t" << "����\t" << "�Ա�\t" << "�绰\t" << "��ַ" << endl;
	for (i = 0; i < ps->size; i++)
	{
		cout << ps->personArr[i].name << "\t";
		cout << ps->personArr[i].age << "\t";
		if (ps->personArr[i].sex == 1) {
			cout << "��" << "\t";
		}
		else if (ps->personArr[i].sex == 2) {
			cout << "Ů" << "\t";
		}
		cout << ps->personArr[i].tele << "\t";
		cout << ps->personArr[i].addr << endl;
	}
}
void DelContact(Contact* ps) {
	string Search_name;
	cout << "������Ҫɾ����ϵ�˵�������";
	cin >> Search_name;
	int ret = Search_by_name(ps, Search_name);
	if (ret == -1) {
		cout << "δ���ҵ����ˡ�" << endl;
	}
	else {
		for (int i = ret; i < ps->size; i++) {
			ps->personArr[i] = ps->personArr[i + 1];
		}
		ps->size--;
		cout << "ɾ���ɹ���" << endl;
	}
}
void SearchContact(const Contact* ps) {
	string Search_name;
	cout << "������Ҫ�����˵�������";
	cin >> Search_name;
	int ret = Search_by_name(ps, Search_name);
	if (ret == -1) {
		cout << "δ���ҵ����ˡ�" << endl;
	}
	else {
		cout << "����\t" << "����\t" << "�Ա�\t" << "�绰\t" << "��ַ" << endl;
		cout << ps->personArr[ret].name << "\t" << ps->personArr[ret].age << "\t";
		if (ps->personArr[ret].sex == 1) {
			cout << "��" << "\t";
		}
		else if (ps->personArr[ret].sex == 2) {
			cout << "Ů" << "\t";
		}
		cout << ps->personArr[ret].tele << "\t" << ps->personArr[ret].addr << endl;
	}
}
void ModifyContact(Contact* ps) {
	string Search_name;
	cout << "������Ҫ�����˵�������";
	cin >> Search_name;
	int ret = Search_by_name(ps, Search_name);
	if (ret == -1) {
		cout << "δ���ҵ����ˡ�" << endl;
	}
	else {
		cout << "��������ϵ��������";
		cin >> ps->personArr[ret].name;
		cout << "��������ϵ�����䣺";
		cin >> ps->personArr[ret].age;
		cout << "��������ϵ���Ա�1Ϊ�У�2ΪŮ����";
		while (1) {
			cin >> ps->personArr[ret].sex;
			if (ps->personArr[ret].sex == 1 || ps->personArr[ret].sex == 2) {
				break;
			}
			else
				cout << "����������������룺";
		}
		cout << "��������ϵ�˵绰��";
		cin >> ps->personArr[ret].tele;
		cout << "��������ϵ�˵�ַ��";
		cin >> ps->personArr[ret].addr;
		cout << "�޸ĳɹ���" << endl;
	}
}
void CleanContact(Contact* ps) {
	ps->size = 0;
	cout << "�������ϵ�ˡ�" << endl;
}

//1����2��ʾ��3ɾ��4�飬5�ģ�6��գ�0�˳�

int main() {
	int input = 0;
	Contact abs;
	abs.size = 0;
	while (1) {
		menu();
		cout << "������ѡ�";
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
			cout << "�˳�ͨѶ¼����ӭ�´�ʹ�á�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "����������������룺" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}
