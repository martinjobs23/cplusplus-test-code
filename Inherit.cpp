#include <iostream>
#include<string>
using namespace std;

//class BasePage {
//public:
//	void header() {
//		cout << "这是公共头部。" << endl;
//	}
//	void footer() {
//		cout << "这是公共尾部。" << endl;
//	}
//	void left() {
//		cout << "这是公共分类列表。" << endl;
//	}
//
//};
//class Java :public BasePage {
//public:
//	void content() {
//		cout << "Java的学科视频。" << endl;
//	}
//};
//class CPP :public BasePage {
//public:
//	void content() {
//		cout << "CPP的学科视频。" << endl;
//	}
//};
//class Python :public BasePage {
//public:
//	void content() {
//		cout << "Python的学科视频。" << endl;
//	}
//};
//
//void test01() {
//	Java ja;
//	CPP cpp;
//	Python py;
//	cout << "Java包含的全部内容：" << endl;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "---------------------" << endl;
//	cout << "CPP包含的全部内容：" << endl;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//	cout << "---------------------" << endl;
//	cout << "Java包含的全部内容：" << endl;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "---------------------" << endl;
//}
//
//
//int main() {
//	test01();
//
//	return 0;
//}

//class Base1 {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1 {
//public:
//	int m_D;
//	Son1() {
//		m_A = 100;
//		m_B = 200;
//	}
//	~Son1() {
//
//	}
//};
//class Son2:protected Base1{
//public:
//	Son2() {
//		m_A = 100;
//		m_B = 100;
//	}
//
//};
//class Son3 :private Base1 {
//public:
//	Son3() {
//		m_A = 100;
//		m_B = 200;
//	}
//};
//
//void fun() {
//	Son1 s1;
//	cout << s1.m_A << endl;
//	cout << sizeof(s1) << endl;
//	//cout << s1.m_B << endl;
//	Son2 s2;
//	/*cout << s2.m_A << endl;	变为保护权限
//	cout << s2.m_B << endl;*/
//	Son3 s3;
//	/*cout << s3.m_A << endl;	变为私有权限
//	cout << s3.m_B << endl;		变为私有权限*/
//}
//
//int main() {
//	fun();
//
//	return 0;
//}

//class Base {
//public:
//	int m_A;
//	static int m_B;
//	Base() {
//		m_A = 100;
//	}
//	void func() {
//		cout << "Base中的func" << endl;
//	}
//	void func(int a) {
//		cout << "Base中的func(int a)" << endl;
//	}
//	static void func02() {
//		cout << "Base - static void func02()" << endl;
//	}
//};
//int Base::m_B = 300;
//class Son : public Base {
//public:
//	int m_A;
//	static int m_B;
//	Son() {
//		m_A = 200;
//	}
//	void func() {
//		cout << "Son中的func" << endl;
//	}
//	static void func02() {
//		cout << "Son - static void func02()" << endl;
//	}
//};
//int Son::m_B = 400;
//
//void test() {
//	Son s1;
//	cout << s1.m_A << endl;
//	cout << s1.Base::m_A << endl;
//	cout << s1.m_B << endl;
//	cout << s1.Base::m_B << endl;
//	cout << Son::m_B << endl;
//	cout << Base::m_B << endl;
//	cout << Son::Base::m_B << endl;
//
//	s1.func();
//	s1.Base::func();
//	s1.Base::func(100);
//	s1.func02();
//	s1.Base::func02();
//
//	Son::func02();
//	Base::func02();
//	Son::Base::func02();
//}
//
//int main() {
//	test();
//	return 0;
//}

//class Base1 {
//public:
//	int m_A;
//	Base1() {
//		m_A = 100;
//	}
//};
//class Base2 {
//public:
//	int m_A;
//	Base2() {
//		m_A = 200;
//	}
//};
//
//class Son :public Base1, public Base2 {
//public:
//	int m_C;
//	int m_D;
//	Son() {
//		m_C = 300;
//		m_D = 400;
//	}
//
//
//};
//void test01() {
//	Son s1;
//	cout << s1.Base1::m_A << endl;
//	cout << s1.Base2::m_A << endl;
//
//	cout << sizeof(Son) << endl;
//}
//
//int main() {
//	test01();
//
//	return 0;
//}

class Animal {
public:
	int m_Age;
	
};

class Sheep :virtual public Animal {

};
class Camel :virtual public Animal {

};

class SheepCamel :public Sheep, public Camel {

};

void test01() {
	SheepCamel sc;
	sc.m_Age = 18;
	cout << sc.m_Age << endl;

}
int main() {
	test01();
	return 0;
}