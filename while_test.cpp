#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<windows.h>
using namespace std;
//ˮ�ɻ���
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
//���ܺ�7
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