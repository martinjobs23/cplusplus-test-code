#include<iostream>
#include<string>
using namespace std;

class CPU {
public:
	virtual void Calc() = 0;
};
class VideoCard {
public:
	virtual void Display() = 0;
};
class Memory {
public:
	virtual void Storage() = 0;
};
class IntelCPU :public CPU {
public:
	string name = "Intel";
	void Calc() {
		cout << name << "的CPU在进行计算。" << endl;
	}
};
class LenovoCPU :public CPU {
public:
	string name = "Lenovo";
	void Calc() {
		cout << name << "的CPU在进行计算。" << endl;
	}
};
class IntelVideoCard :public VideoCard {
public:
	string name = "Intel";
	void Display() {
		cout << name << "的显卡在进行计算。" << endl;
	}
};
class LenovoVideoCard :public VideoCard {
public:
	string name = "Lenovo";
	void Display() {
		cout << name << "的显卡在进行计算。" << endl;
	}
};
class SamsungMemory:public Memory {
public:
	string name = "Samsung";
	void Storage() {
		cout << "正在使用" << name << "的内存进行存储。" << endl;
	}
};

class Computer {
public:
	
	Computer(CPU* c, VideoCard* v, Memory* m) {
		this->c = c;
		this->v = v;
		this->m = m;
	}

	void doWork() {
		c->Calc();
		v->Display();
		m->Storage();
	}

	~Computer() {
		if (c != NULL) {
			delete c;
			c = NULL;
		} 
		if (v != NULL) {
			delete v;
			v = NULL;
		} 
		if(m != NULL) {
			delete m;
			m = NULL;
		}
	}

private:
	CPU* c;
	VideoCard* v;
	Memory* m;
};

void test01() {
	/*IntelCPU c1;
	IntelVideoCard v1;
	SamsungMemory m1;
	Computer com1(&c1, &v1, &m1);
	com1.doWork();*/

	IntelCPU* ic = new IntelCPU;
	IntelVideoCard* iv = new IntelVideoCard;
	SamsungMemory* sm = new SamsungMemory;

	Computer* com1 = new Computer(ic, iv, sm);
	com1->doWork();
	delete com1;
	com1 = NULL;

}
int main() {

	test01();
	return 0;
}
