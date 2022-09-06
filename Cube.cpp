//
//  main.cpp
//  Class_func
//
//  Created by DFH on 2022/9/6.
//

#include <iostream>
using namespace std;
#include<string>

//class Peo{
//private:
//    string m_password;
//public:
//    string m_name;
//protected:
//    string m_car;
//public:
//    void func(){
//        m_name = "张三";
//        m_car = "奔驰";
//        m_password = 123456;
//    }
//};
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    Peo p1;
//    p1.m_name = "lisi";
//    //p1.m_car = "baoma";
//    std::cout << "Hello, World!\n";
//    return 0;
//}
//class Person{
//public:
//    //写入姓名
//    void setName(string name){
//        m_name = name;
//    }
//    string getName(){
//        return m_name;
//    }
//    int getAge(){
//        //m_age = 0;
//        return m_age;
//    }
//    void setAge(int age){
//        if (age < 0||age > 150) {
//            age = 0;
//            cout<<"年龄输入错误。"<<endl;
//            return;
//        }
//        m_age = age;
//    }
//    void setLover(string lover){
//        m_lover = lover;
//    }
//private:
//    string m_name;
//    int m_age;
//    string m_lover;
//};
//
//int main(){
//    Person p1;
//    p1.setName("张三");
//    cout<<"姓名是："<<p1.getName()<<endl;
//    p1.setAge(18);
//    cout<<"年龄是："<<p1.getAge()<<endl;
//
//    return 0;
//}

class Cube{
private:
    double length;
    double width;
    double height;
    double area;
    double volume;
public:
    double GetArea(){
        area = 2 * (length * width + length * height + width * height);
        return area;
    }
    double GetVolume(){
        volume = length * width * height;
        return volume;
    }
    void SetLength(double l){
        length = l;
    }
    void SetWidth(double w){
        width = w;
    }
    void SetHeight(double h){
        height = h;
    }
    double GetLength(){
        return length;
    }
    double GetWidth(){
        return width;
    }
    double GetHeight(){
        return height;
    }
    bool isSameByClass(Cube &c){
        if (c.GetLength() == length && c.GetWidth() == width &&c.GetHeight() == height) {
            return true;
        }
        return false;
    }
};
bool isSame(Cube &c1, Cube &c2){
    if (c1.GetLength() == c2.GetLength()&&c1.GetWidth() == c2.GetWidth()&&c1.GetHeight() == c2.GetHeight()) {
        return true;
    }
    return false;
}

int main(){
    Cube c1;
    c1.SetLength(3);
    c1.SetWidth(4);
    c1.SetHeight(5);
    cout<<"Cube c1的表面积为"<<c1.GetArea()<<"，体积为"<<c1.GetVolume()<<"。"<<endl;
    
    Cube c2;
    c2.SetLength(10);
    c2.SetWidth(10);
    c2.SetHeight(10);
    
    bool b1 = isSame(c1,c2);
    bool b2 = c1.isSameByClass(c2);
    if (b2) {
        cout<<"两个立方体完全相同。"<<endl;
    }
    else
        cout<<"两个立方体不同。"<<endl;
    return 0;
}
