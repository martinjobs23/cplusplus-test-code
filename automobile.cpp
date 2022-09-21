#include<iostream>
#include<string>
using namespace std;

class engine {
public:
	string m_name;
	double m_power;
	void ShowEngine() {
		cout << "该发动机名称为：" << m_name << endl;
		cout << "该发动机最大功率为：" << m_power << endl;
	}
};

class Automobile {
public:
	double m_weight;
	unsigned int m_wheel;
	string m_name;
	engine e;

	void ShowInfo() {
		cout << "该车的名字为：" << m_name << endl;
		cout << "该车的重量为：" <<m_weight << endl;
		cout << "该车的车轮个数为：" << m_wheel << endl;
	}
};

class Car :public Automobile {
public:
	unsigned int m_num;

	void ShowInfo() {
		cout << "该车的名字为：" << m_name << endl;
		cout << "该车的重量为：" << m_weight << endl;
		cout << "该车的车轮个数为：" << m_wheel << endl;
		cout << "该车的核载人数为：" << m_num << endl;
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