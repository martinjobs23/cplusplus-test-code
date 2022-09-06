//
//  main.cpp
//  Circle
//
//  Created by DFH on 2022/9/6.
//

#include <iostream>
using namespace std;
#include <cmath>

class Point{
private:
    double x;
    double y;
public:
    void Set_X(double m){
        x = m;
    }
    void Set_Y(double n){
        y = n;
    }
    double Get_X(){
        return x;
    }
    double Get_Y(){
        return y;
    }
};
class Circle{
private://圆心的位置和半径
    double x;
    double y;
    double r;
    Point p;
public://在此设置获取圆心的位置和半径
    void Set_X(double m){
        x = m;
    }
    void Set_Y(double n){
        y = n;
    }
    void Set_R(double l){
        r = l;
    }
    double Get_X(){
        return x;
    }
    double Get_Y(){
        return y;
    }
    double Get_R(){
        return r;
    }
    //计算点到圆心的距离，使用成员函数
//    double GetDis(Point &p){
//        double dis ;
//        return dis;
//    }
    
};

//计算点到圆心的距离，使用全局函数
double GetDis(Point &p,Circle &c){
    double p_x = p.Get_X();
    double p_y = p.Get_Y();
    double c_x = c.Get_X();
    double c_y = c.Get_Y();
    double dis = sqrt(pow((c_x - p_x), 2) + pow((c_y - p_y), 2));
    return dis;
}
int JudgeByDis(Point &p,Circle &c){
    double dis = GetDis(p, c);
    double c_r = c.Get_R();
    if (dis > c_r) {
        return -1;
    }else if(dis < c_r){
        return 1;
    }else
        return 0;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Circle c1;
    c1.Set_X(3);
    c1.Set_Y(4);
    c1.Set_R(5);
    Point p1;
    p1.Set_X(-1);
    p1.Set_Y(0);
    int flag = JudgeByDis(p1, c1);
    if(flag < 0){
        cout<<"点在圆外。"<<endl;
    }else if(flag>0){
        cout<<"点在圆内。"<<endl;
    }
    else
        cout<<"点在圆上。"<<endl;
    
    return 0;
}
