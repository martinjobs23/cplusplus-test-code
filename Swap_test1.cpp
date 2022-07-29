//
//  main.cpp
//  Swap_test
//
//  Created by DFH on 2022/7/29.
//

#include <iostream>
using namespace std;


void Swap1(double *p,double *q){
    double tmp = *p;
    *p=*q;
    *q=tmp;
}
void Swap2(double &sa,double &sb){
    double tmp = sa;
    sa = sb;
    sb = tmp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    double a = 1.1,b = 2.2;
    cout<<"交换前a="<<a<<" ,b="<<b<<endl;
    Swap1(&a,&b);
    cout<<"交换后a="<<a<<" ,b="<<b<<endl;
    Swap2(a,b);
    cout<<"再次交换后a="<<a<<" ,b="<<b<<endl;
    return 0;
}
