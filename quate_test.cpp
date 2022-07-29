//
//  main.cpp
//  quote_test
//
//  Created by DFH on 2022/7/29.
//

#include <iostream>
using namespace std;

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    float f = 1.1f;
//    float &rf = f;
//    cout<<"f = "<<f<<" rf = "<<rf<<endl;
//    f = 2.2f;
//    cout<<"f = "<<f<<" rf = "<<rf<<endl;
//    rf = 3.3f;
//    cout<<"f = "<<f<<" rf = "<<rf<<endl;
//
//    cout<<"f的地址为"<<&f<<endl;
//    cout<<"rf的地址为"<<&rf<<endl;
//    cout<<sizeof(&f);
//}

double &index(double *p,int i){
    return p[i];
}

int main(){
    double a[] = {1.1,2.2,3.3,4.4,5.5};
    cout<<index(a, 2)<<endl;
    index(a, 3) = 4.0;
    cout<<a[3]<<endl;
    
    return 0;
}
