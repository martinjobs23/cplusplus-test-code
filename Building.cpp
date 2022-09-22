//
//  main.cpp
//  Buliding
//
//  Created by DFH on 2022/9/22.
//

#include <iostream>
#include <string>
using namespace std;

class Building{
public:
    string name;
    int floor;
    double area;
    Building(){
        name = "Unknown";
        floor = 0;
        area = 0.0;
    }
    Building(string name, int floor, double area){
        this->name = name;
        this->floor = floor;
        this->area = area;
    }
    
    virtual void Display(){
        cout << "该楼的名称为"<<name<<",楼层共计" << floor << "层，面积共" << area <<"平米" << endl;
    }
    
};

class Residential:public Building{
public:
    int unit;
    int households;
    Residential(){
        unit = 0;
        households = 0;
    }
    Residential(Building b,int unit ,int households):Building(b){
        this->unit = unit;
        this->households = households;
    }
    void Display(){
        cout << "该住宅楼的名称为"<<name<<",楼层共计" << floor << "层，面积共" << area <<"平米。" << endl;
        cout << "共有"<<unit <<"个单元，"<<households<<"个户数。"<<endl;
    }
};

class Office:public Building{
public:
    int offnum;
    int meetingnum;
    Office(){
        offnum = 0;
        meetingnum = 0;
    }
    Office(Building b,int offnum ,int meetingnum):Building(b){
        this->offnum = offnum;
        this->meetingnum = meetingnum;
    }
    void Display(){
        cout << "该办公楼的名称为"<<name<<",楼层共计" << floor << "层，面积共" << area <<"平米。" << endl;
        cout << "共有"<<offnum <<"个办公室，"<<meetingnum<<"个会议室。"<<endl;
    }
};

class Hotel:public Building{
public:
    int guestroomnum;
    Hotel(){
        guestroomnum = 0;
    }
    Hotel(Building b,int guestroomnum):Building(b){
        this->guestroomnum = guestroomnum;
    }
    void Display(){
        cout << "该酒店楼的名称为"<<name<<",楼层共计" << floor << "层，面积共" << area <<"平米。" << endl;
        cout << "共有"<<guestroomnum<<"个会议室。"<<endl;
    }
};

void ShowDisplay(Building *b){
    b->Display();
}

void test01(){
    Building *b1 = new Residential(Building("beimeiquanhaung",20,20000),4,96);
    ShowDisplay(b1);
    delete b1;
    
    b1 = new Hotel(Building("jinjiangzhixing",8,50000),118);
    ShowDisplay(b1);
    delete b1;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    test01();
    
    return 0;
}
