#include <iostream>
#include <cmath>
using namespace std;

class Complex {
	friend Complex operator+(Complex& c1, Complex& c2);
public:
	Complex() {
		m_rpart = 0;
		m_ipart = 0;
	}
	Complex(int rpart, int ipart) {
		m_rpart = rpart;
		m_ipart = ipart;
	}
	void SetRpart(int rpart) {
		m_rpart = rpart;
	}
	void SetIpart(int ipart) {
		m_ipart = ipart;
	}
	void ShowComplex() {
		cout << "¸Ã¸´ÊýÎª£º" << m_rpart << "+" << m_ipart << "i" << endl;
	}
	/*double GetMod() {
		CalMod();
		return m_mod;
	}*/

private:
	int m_rpart;
	int m_ipart;
	/*double m_mod;
	void CalMod() {
		m_mod = sqrt(pow(m_rpart, 2) + pow(m_ipart, 2));
	}*/
};

Complex operator+(Complex &c1,Complex &c2) {
	Complex c3;
	c3.SetRpart(c1.m_rpart + c2.m_rpart);
	c3.SetIpart(c1.m_ipart + c2.m_ipart);
	return c3;
}

int main() {
	Complex c1(1, 3);
	Complex c2(2, 4);
	Complex c3 = c1 + c2;
	c3.ShowComplex();

	return 0;
}
