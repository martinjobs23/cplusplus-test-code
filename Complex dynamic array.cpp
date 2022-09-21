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
		cout << "�ø���Ϊ��" << m_rpart << "+" << m_ipart << "i" << endl;
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
	cout << "�����뺯����ʵ����" ;
	cin >> rpart;
	cout << "�����뺯�����鲿��" ;
	cin >> ipart;
	pc->SetRpart(rpart);
	pc->SetIpart(ipart);
	pc->ShowComplex();
}
void ShowComplex(Complex* pc) {
	pc->ShowComplex();
	cout << "�ø���ģ�ĳ���Ϊ" << pc->GetMod() << endl;
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
		cout << "�밴Ҫ�������" << i + 1 << "��������" << endl;
		InitComplex(pc + i);
	}
	BubbleSort(pc);
	cout << "��������󣬴Ӵ�С��������Ϊ��" << endl;
	for (i = 0; i < 5; i++) {
		ShowComplex(pc + i);
	}
	
	delete pc;
	pc = NULL;

	return 0;
}