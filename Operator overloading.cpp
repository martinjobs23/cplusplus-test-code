//
//  main.cpp
//  Operator overloading
//
//  Created by DFH on 2022/9/13.
//

//class Person{
//public:
//    int m_A;
//    int m_B;
//    Person operator+(Person &p);
//    Person operator+(int i);    //函数重载
//};
//Person Person::operator+(Person &p){
//    Person tmp ;
//    tmp.m_A = this->m_A + p.m_A;
//    tmp.m_B = this->m_B + p.m_B;
//    return tmp;
//}
//Person Person::operator+(int i){
//    Person tmp;
//    tmp.m_A = this->m_A + i;
//    tmp.m_B = this->m_B + i;
//    return tmp;
//}
////Person operator+(Person &p1,Person &p2){
////    Person tmp;
////    tmp.m_A = p1.m_A + p2.m_A;
////    tmp.m_B = p1.m_B + p2.m_B;
////    return tmp;
////}
//
//void test01(){
//    Person p1 = {10,20};
//    Person p2;
//    p2.m_A = 10;
//    p2.m_B = 20;
//    Person p3 = p1 + p2;
//    cout<<"相加后的结果是：";
//    cout<<"m_A = "<< p3.m_A<<" m_b = "<<p3.m_B<<endl;
//
//    p3 = p1 + 10;
//    cout<<"相加后的结果是：";
//    cout<<"m_A = "<< p3.m_A<<" m_b = "<<p3.m_B<<endl;
//}
//
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    test01();
//    //std::cout << "Hello, World!\n";
//    return 0;
//}

//class Person{
//public:
//    int m_A;
//    int m_B;
//};
//
//ostream& operator<<(ostream &cout, Person &p){
//    cout<<"m_A = "<< p.m_A<<" m_b = "<<p.m_B;
//    return cout;
//}
//
//void test01(){
//    Person p1;
//    p1.m_A = 10;
//    p1.m_B = 20;
//    cout << p1 << endl;
//}
//int main(){
//    test01();
//    return 0;
//}


//class MyInt{
//    friend ostream& operator<<(ostream &cout ,  MyInt const &i);
//public:
//    MyInt(){
//        m_num = 0;
//    }
//    MyInt& operator++(){    //前置++，先加后使用
//        m_num++;
//        return *this;
//    }
//    MyInt operator++(int){  //后置++，先记录数据，再让num++，然后返回之前数据
//        MyInt tmp = *this;
//        m_num++;
//        return tmp;
//    }
//
//private:
//    int m_num;
//};
//
//ostream& operator<<(ostream &cout ,  MyInt const &i){   //const修饰引用作为常引用，可以用来接收临时变量
//    cout << i.m_num;
//    return cout;
//}
//
//void test01(){
//    MyInt myint;
//    cout << myint++ <<endl;
//    cout << ++myint <<endl;
//}
//
//int main(){
//    test01();
//    return 0;
//}

//class Person {
//public:
//
//    int* m_age;
//    Person(int age) {
//        m_age = new int(age);
//    }
//    Person& operator=(Person& p) {
//        if (m_age != NULL) {
//            delete m_age;
//            m_age = NULL;
//        }
//        this->m_age = new int(*p.m_age);
//        return *this;
//    }
//    ~Person() {
//        if (m_age != NULL) {
//            delete m_age;
//            m_age = NULL;
//        }
//    }
//
//};
//
//void test01() {
//    Person p1(20);
//    Person p2(30);
//    Person p3(18);
//    p2 = p1 = p3;
//
//    cout << "p1的年龄为" << *p1.m_age << endl;
//    cout << "p2的年龄为" << *p2.m_age << endl;
//    cout << "p3的年龄为" << *p3.m_age << endl;
//}
//
//int main() {
//    test01();
//    return 0;
//}

//class Person {
//public:
//	string m_Name;
//	int age;
//	Person(string name,int age) {
//		m_Name = name;
//		this->age = age;
//	}
//	bool operator==(Person &p) {
//		if (this->m_Name == p.m_Name && this->age == p.age) {
//			return 1;
//		}
//		return 0;
//	}
//	bool operator!=(Person& p) {
//		if (this->m_Name == p.m_Name && this->age == p.age) {
//			return 0;
//		}
//		return 1;
//	}
//};
//
//void test01() {
//	Person p1("zhangsan", 20);
//	Person p2("zhangsan", 20);
//	if (p1 == p2) {
//		cout << "p1和p2是相等的。" << endl;
//	}
//	else
//		cout << "两者不相等。" << endl;
//	if (p1 != p2) {
//		cout << "p1和p2是不相等的。" << endl;
//	}
//	else
//		cout << "两者相等。" << endl;
//}
//int main() {
//	test01();
//
//	return 0;
//}

class MyPrint {
public:
	void operator()(string test) {
		cout << test << endl;
	}
};

void MyPrint02(string test) {
	cout << test << endl;

}
class MyAdd {

public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};
void test01() {
	MyPrint mp;
	mp("hello world!");
	MyPrint02("Hello");
}

void test02() {
	MyAdd ma;
	cout << ma(100, 200) << endl;
	cout << MyAdd()(100, 100) << endl;

}
int main() {
	test01();
	test02();

	return 0;
}

