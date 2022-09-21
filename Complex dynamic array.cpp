#include <iostream>
#include <cmath>
using namespace std;

class Complex {
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
		cout << "该复数为：" << m_rpart << "+" << m_ipart << "i" << endl;
	}
	double GetMod() {
		CalMod();
		return m_mod;
	}

private:
	int m_rpart;
	int m_ipart;
	double m_mod;
	void CalMod() {
		m_mod = sqrt(pow(m_rpart, 2) + pow(m_ipart, 2));
	}
};
void InitComplex(Complex *pc) {
	int rpart;
	int ipart;
	cout << "请输入函数的实部：" ;
	cin >> rpart;
	cout << "请输入函数的虚部：" ;
	cin >> ipart;
	pc->SetRpart(rpart);
	pc->SetIpart(ipart);
	pc->ShowComplex();
}
void ShowComplex(Complex* pc) {
	pc->ShowComplex();
	cout << "该复数模的长度为" << pc->GetMod() << endl;
}
void BubbleSort(Complex* pc) {
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++) {
		int flag = 0;
		for (j = 0; j < 4 - i; j++) {
			if ((pc+j)->GetMod() < (pc + j + 1)->GetMod()) {
				Complex tmp = *(pc + j);
				*(pc + j) = *(pc + j + 1);
				*(pc + j + 1) = tmp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
}
int main() {
	Complex* pc = new Complex[5];
	int i = 0;
	for (i = 0; i < 5; i++) {
		cout << "请按要求输入第" << i + 1 << "个复数：" << endl;
		InitComplex(pc + i);
	}
	BubbleSort(pc);
	cout << "经过排序后，从大到小，各复数为：" << endl;
	for (i = 0; i < 5; i++) {
		ShowComplex(pc + i);
	}
	
	delete pc;
	pc = NULL;

	return 0;
}