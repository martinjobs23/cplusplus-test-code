#include<iostream>
#include<string>
using namespace std;

class engine {
public:
	string m_name;
	double m_power;
	void ShowEngine() {
		cout << "�÷���������Ϊ��" << m_name << endl;
		cout << "�÷����������Ϊ��" << m_power << endl;
	}
};

class Automobile {
public:
	double m_weight;
	unsigned int m_wheel;
	string m_name;
	engine e;

	void ShowInfo() {
		cout << "�ó�������Ϊ��" << m_name << endl;
		cout << "�ó�������Ϊ��" <<m_weight << endl;
		cout << "�ó��ĳ��ָ���Ϊ��" << m_wheel << endl;
	}
};

class Car :public Automobile {
public:
	unsigned int m_num;

	void ShowInfo() {
		cout << "�ó�������Ϊ��" << m_name << endl;
		cout << "�ó�������Ϊ��" << m_weight << endl;
		cout << "�ó��ĳ��ָ���Ϊ��" << m_wheel << endl;
		cout << "�ó��ĺ�������Ϊ��" << m_num << endl;
		e.ShowEngine();
	}
};

void test01() {
	Car c1;
	/*Automobile a1;
	a1.m_name = "benchi";
	a1.m_weight = 1256.54;
	a1.m_wheel = 4;*/
	c1.m_name = "baoma";
	c1.m_num = 4;
	c1.m_weight = 1111.666;
	c1.m_wheel = 6;
	c1.e.m_name = "yuanchang";
	c1.e.m_power = 717.6;
	c1.ShowInfo();
	/*a1.ShowInfo();*/
}
int main() {
	test01();
	return 0;
}