#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<windows.h>
using namespace std;
//Ë®ÏÉ»¨Êý
//int main() {
//	int i = 100;
//	int sum = 0;
//	while (i < 10000) {
//		sum = 0;
//		int tmp = i;
//		int k = 1;
//		while (tmp /= 10) {
//			k++;
//		}
//		tmp = i;
//		while (tmp) {
//			int a = tmp % 10;
//			sum += pow(a, k);
//			tmp /= 10;
//		}
//		if (sum == i) {
//			cout << i << endl;
//		}
//		i++;
//	}
//}
//²»ÄÜº¬7
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    //std::cout << "Hello, World!\n";
//    srand((unsigned int)time(NULL));
//    int ran = rand()%100 + 1;
//    //cout<<ran<<endl;
//    int i = 0;
//    int k;
//    while(i<10){
//        k = 0;
//        cout<<"请输入猜测的数字：";
//        cin>>k;
//        if (k == ran) {
//            cout<<"恭喜你猜对了。"<<endl;
//            break;
//        }else{
//            if (k>ran) {
//                cout<<"你猜测的数字大于随机数字。请重新猜测："<<endl;
//            }else if (k<ran){
//                cout<<"你猜测的数字小于随机数字。请重新猜测："<<endl;
//            }
//        }
//        i++;
//    }
//    if (i == 10) {
//        cout<<"没有猜测机会啦。"<<endl;
//    }
//    return 0;
//}
int main() {
	int i = 0;
	for (i = 0; i < 100; i++) {
		int tmp = i;
		if (tmp % 7 == 0 || tmp % 10 == 7 || tmp / 10 == 7) {
			;
		}
		else
		{
			cout << i << endl;
			Sleep(100);
		}
	}
}
