#include<iostream>
#include<string>
using namespace std;

//class Animal {
//public:
//	virtual void speak() {
//		cout << "������˵��" << endl;
//
//	}
//};
//class Cat :public Animal {
//public:
//	void speak() {
//		cout << "è��˵��" << endl;
//	}
//};
//class Dog :public Animal {
//public:
//	void speak() {
//		cout << "����˵��" << endl;
//	}
//};
//
//void doSpeak(Animal &a) {
//	a.speak();
//}
//
//void test01() {
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//int main() {
//	test01();
//	return 0;
//}


//class AbstractCalc {
//public:
//
//    virtual int GetResult() {
//        return 0;
//    }
//    int n_num1;
//    int n_num2;
//};
//
//class CalcAdd :public AbstractCalc {
//public:
//    int GetResult() {
//        return n_num1 + n_num2;
//    }
//};
//
//class CalcDel :public AbstractCalc {
//public:
//    int GetResult() {
//        return n_num1 - n_num2;
//    }
//};
//
//class CalcMul :public AbstractCalc {
//public:
//    int GetResult() {
//        return n_num1 * n_num2;
//    }
//};
//
//class CalcDiv :public AbstractCalc {
//public:
//    int GetResult() {
//        return n_num1 / n_num2;
//    }
//};
//
//void test01() {
//    AbstractCalc* abs = new CalcAdd;
//    abs->n_num1 = 10;
//    abs->n_num2 = 20;
//    cout << abs->n_num1 << " + " << abs->n_num2 << " = " << abs->GetResult() << endl;
//    delete abs;
//
//    abs = new CalcDel;
//    abs->n_num1 = 10;
//    abs->n_num2 = 20;
//    cout << abs->n_num1 << " - " << abs->n_num2 << " = " << abs->GetResult() << endl;
//    delete abs;
//
//    abs = new CalcMul;
//    abs->n_num1 = 10;
//    abs->n_num2 = 20;
//    cout << abs->n_num1 << " * " << abs->n_num2 << " = " << abs->GetResult() << endl;
//    delete abs;
//
//    abs = new CalcDel;
//    abs->n_num1 = 10;
//    abs->n_num2 = 20;
//    cout << abs->n_num1 << " / " << abs->n_num2 << " = " << abs->GetResult() << endl;
//    delete abs;
//    abs = NULL;
//
//}
//int main(int argc, const char* argv[]) {
//    // insert code here...
//    //std::cout << "Hello, World!\n";
//    test01();
//    return 0;
//}

//
//class Base {
//public:
//	virtual void func() = 0;
//};
//
//class Son :public Base {
//
//};
//class Son2 :public Base {
//public:
//	void func() {
//		cout << "func()��������" << endl;
//	}
//};
//void test01() {
//	//Base b;
//	//new Base;
//	//Son s;	�����ж��Ǵ���ģ��������޷�ʵ���������������û����д���麯��Ҳ�޷�ʵ��������
//	Son2 s2;
//	Base* pb = new Son2;
//	pb->func();
//
//}
//
//int main() {
//	test01();
//
//	return 0;
//}

//�α�����
#define PI 3.1415926
class CPosition {
public:
	double m_fx, m_fy;

	CPosition(double m_fx = 0.0, double m_fy = 0.0) {
		this->m_fx = m_fx;
		this->m_fy = m_fy;
	}
	CPosition GetPosition() const {
		return *this;
	}
};

class CFigure {
protected:
	CPosition m_Pos;
public:
	CFigure(CPosition pos) {
		m_Pos = pos;
	}
	CPosition GetPos()const {
		return m_Pos;
	}

	virtual double Area() = 0;
	virtual double Perimeter() = 0;

};
class CCircle :public CFigure {
protected:
	double m_rad;
public:
	CCircle(CPosition pos, double rad) :CFigure(pos) {
		m_rad = rad;
	}
	double Area() {
		return PI * m_rad * m_rad;
	}
	double Perimeter() {
		return 2 * PI * m_rad;
	}
};

class CRectangle :public CFigure {
protected:
	double m_length;
	double m_width;
public:
	CRectangle(CPosition pos, double length, double width) :CFigure(pos) {
		m_length = length;
		m_width = width;
	}
	double Area() {
		return m_length * m_width;
	}
	double Perimeter() {
		return 2 * (m_length + m_width);
	}

};

int main() {
	CFigure* pcf;
	CCircle c1(CPosition(100, 100), 100);
	CRectangle r1(CPosition(100, 100), 200, 100);
	pcf = &c1;
	cout << "Բ�������Ϊ��(" << pcf->GetPos().m_fx << "," << pcf->GetPos().m_fy << ")" << endl;
	cout << "Բ�����Ϊ��" << pcf->Area() << "���ܳ�Ϊ" << pcf->Perimeter() << endl;

	pcf = &r1;
	cout << "���ε�����Ϊ��(" << pcf->GetPos().m_fx << "," << pcf->GetPos().m_fy << ")" << endl;
	cout << "���ε����Ϊ��" << pcf->Area() << "���ܳ�Ϊ" << pcf->Perimeter() << endl;

	return 0;
}