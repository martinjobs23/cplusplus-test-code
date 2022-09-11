//
//  main.cpp
//  This
//
//  Created by DFH on 2022/9/8.
//

#include <iostream>
#include <string>
using namespace std;

//class Person{
//public:
//    static int m_a;
//    int m_c;
//    string GetName(){
//        return name;
//    }
//    void SetName(string name){
//        this->name = name;
//    }
//    static void func(){
//        m_a = 0;    //静态成员函数访问静态成员变量
//        //m_c = 300;    //静态成员函数不能访问非静态变量
//        cout<<"func的函数调用。"<<endl;
//    }
//private:
//    static int m_b;
//    string name;
//    static void func2(){
//        cout<<"func2的函数调用。"<<endl;
//    }
//};
//int Person::m_a = 100;
//
//void test01(){
//    Person p1;
//    cout << "sizeof(p) = " << sizeof(p1) << endl;
//    p1.SetName("zhangsan");
//    cout<<"p1的名字是"<<p1.GetName()<<endl;
//}
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    //std::cout << "Hello, World!\n";
//    test01();
//
//    return 0;
//}

class Person{
public:
    Person(){
        m_a = 100;
        m_b = 200;
    }
    int m_a;
    mutable int m_b;
    void ShowClassName(){
        cout<<"Class Name is Person."<<endl;
    }
    void ShowAge(){
        if(this == NULL){
            return;
        }
        cout<<"age = "<<m_age<<endl;
    }
    void print() const {
        //m_a = 100;
        m_b = 300;  //mutable修饰的变量可以在常函数中修改
        cout << m_a << endl;
        cout << m_b << endl;
    }
    
private:
    int m_age;
};
void test01(){
    Person *p = NULL;

    p->ShowAge();
    //p->print();
}
void test02(){
    Person p1 ;
    p1.ShowClassName();
    p1.ShowAge();
    p1.print();
}
void test03(){
    const Person p1;
    //p1.ShowClassName();   常对象只能调用常函数
    p1.print();
    
    
}
int main(){
    //test01();
    //test02();
    test03();
    
    return 0;
}
