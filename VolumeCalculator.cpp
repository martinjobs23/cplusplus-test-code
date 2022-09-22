//
//  main.cpp
//  VolumeCalculator
//
//  Created by DFH on 2022/9/22.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define PI 3.1415926

class Geometry{
public:
    virtual double VolumeCalc() = 0;
    
};

class Sphere:public Geometry{
public:
    double m_r;
    double VolumeCalc(){
        return 4.0/3 * PI * pow(m_r,3);
    }
};

class Cylinder:public Geometry{
public:
    double m_r;
    double m_h;
    
    double VolumeCalc(){
        return 2 * PI * m_r * m_h;
    }
};

class Cube: public Geometry{
public:
    double m_a;
    double VolumeCalc(){
        return pow(m_a,3);
    }
};

void doCalc(Geometry * pg){
    cout << "该几何体的体积为" << pg->VolumeCalc() << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Sphere *ps = new Sphere;
    ps->m_r = 5;
    doCalc(ps);
    
    delete ps;
    
    Cylinder *pc = new Cylinder;
    pc->m_r = 5;
    pc->m_h = 10;
    doCalc(pc);
    
    delete pc;
    
    Cube *pc2 = new Cube;
    pc2->m_a = 5;
    doCalc(pc2);
    
    delete pc2;
    
    return 0;
}
