//
//  main.cpp
//  Constructors and Destructors
//
//  Created by DFH on 2022/9/7.
//

#include <iostream>
using namespace std;
#include <string>

//class Person{
//public:
//    Person(){
//        cout<<"Person的无参构造函数调用。"<<endl;
//    }
//    Person(int age,int height){
//        cout<<"Person的有参构造函数调用。"<<endl;
//        m_age = age;
//        m_height = new int(height);
//    }
//    Person(const Person &p1){
//        cout<<"Person的拷贝构造函数调用。"<<endl;
//        m_age = p1.m_age;
//        m_height = new int(*p1.m_height);
//    }
//    ~Person(){
//        cout<<"Person的析构函数调用。"<<endl;
//        if(m_height != NULL){
//            delete m_height;
//            m_height = NULL;
//        }
//    }
//    string m_name;
//    int m_age;
//    int *m_height;
//};
//
//void Test01(){
//    Person p1(20,160);
//    Person p2(p1);
//    cout<<p2.m_age<<endl;
//    cout<<*p2.m_height<<endl;
//}
//void doWork(Person p){
//
//}
//void Test02(){
//    Person p;
//    doWork(p);
//}
//Person doWork2(){
//    Person p1(18,160);
//    return p1;
//}
//void Test03(){
//    Person p = doWork2();
//
//}
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    Test01();
//    //Test02();
//    //Test03();
//    //std::cout << "Hello, World!\n";
//    return 0;
//}
//
//class Phone{
//public:
//    Phone(string name){
//        cout<<"Phone的构造函数调用。"<<endl;
//        p_name = name;
//    }
//    ~Phone(){
//        cout<<"Phone的析构函数调用。"<<endl;
//    }
//    string p_name;
//};
//class Person{
//public:
//    Person(string name,string pName):m_name(name),p(pName){
//        cout<<"Person的构造函数调用。"<<endl;
//    }
//    ~Person(){
//        cout<<"Person的析构函数调用。"<<endl;
//    }
//    string m_name;
//    Phone p;
//};
//
//void test01(){
//    Person p1("张三","iPhone");
//    cout<<p1.m_name<<"拥有"<<p1.p.p_name<<endl;
//}
//
//int main(){
//    test01();
//    return 0;
//}

class Person{
public:
    static int m_a;
    int m_c;
    static void func(){
        m_a = 0;    //静态成员函数访问静态成员变量
        //m_c = 300;    //静态成员函数不能访问非静态变量
        cout<<"func的函数调用。"<<endl;
    }
private:
    static int m_b;
    static void func2(){
        cout<<"func2的函数调用。"<<endl;
    }
};

int Person::m_a = 100;
int Person::m_b = 200;

void test01(){
    Person p1;
    cout<<p1.m_a<<endl;
    
    cout<<Person::m_a<<endl;
    //cout <<Person::m_b<<endl;
    Person p2;
    p2.m_a = 200;
    
    cout<<p1.m_a<<endl;
    
    p1.func();
    Person::func();
//    p2.func2();
//    Person::func2();
}
int main(){
    test01();
    return 0;
}
