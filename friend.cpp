//
//  main.cpp
//  friend
//
//  Created by DFH on 2022/9/11.
//

#include <iostream>
#include <string>
using namespace std;

//class Building{
//    friend void GoodGuy(Building *b);
//public:
//    string SittingRoom;
//    Building(){
//        SittingRoom = "客厅";
//        BedRoom = "卧室";
//    }
//private:
//    string BedRoom;
//};
//void GoodGuy(Building *b){
//    cout<<"正在访问 "<< b->SittingRoom << endl;
//
//    cout<<"正在访问 "<< b->BedRoom << endl;
//
//}
//void test01(){
//    Building b;
//    GoodGuy(&b);
//
//}
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    //std::cout << "Hello, World!\n";
//    test01();
//    return 0;
//}

//class Building{
//    friend class GoodGuy;
//public:
//    string SittingRoom;
//    Building();
//private:
//    string BedRoom;
//};
//
//class GoodGuy{
//public:
//    GoodGuy();
//    Building *b;
//    void Visit();
//    ~GoodGuy();
//};
//
//Building::Building(){
//    SittingRoom = "客厅";
//    BedRoom = "卧室";
//}
//GoodGuy::GoodGuy(){
//    b = new Building;
//}
//
//void GoodGuy::Visit(){
//    cout << "正在访问" << b->SittingRoom << endl;
//
//    cout << "正在访问" << b->BedRoom << endl;
//}
//GoodGuy::~GoodGuy(){
//    delete b;
//    b = NULL;
//}
//
//void test01(){
//    GoodGuy g1;
//    g1.Visit();
//
//}
//int main(){
//    test01();
//
//    return 0;
//}

class Building;
class GoodGuy{
public:
    GoodGuy();
    Building *b;
    void Visit();
    void Visit2();
    ~GoodGuy();
};

class Building{
    friend void GoodGuy::Visit();
public:
    string SittingRoom;
    Building();
private:
    string BedRoom;
};



Building::Building(){
    SittingRoom = "客厅";
    BedRoom = "卧室";
}
GoodGuy::GoodGuy(){
    b = new Building;
}

void GoodGuy::Visit(){
    cout << "visit正在访问" << b->SittingRoom << endl;
    
    cout << "visit正在访问" << b->BedRoom << endl;
}
void GoodGuy::Visit2(){
    cout << "visit2正在访问" << b->SittingRoom << endl;
    
    //cout << "正在访问" << b->BedRoom << endl;
}
GoodGuy::~GoodGuy(){
    delete b;
    b = NULL;
}

void test01(){
    GoodGuy g1;
    g1.Visit();
    g1.Visit2();
}
int main(){
    test01();
    
    return 0;
}
