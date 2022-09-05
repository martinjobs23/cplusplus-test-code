#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int* func() {
//	int* p = new int(10);
//	return p;
//}
//void test01() {
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//}
//void test02() {
//	int* arr = new int[10];
//	for (size_t i = 0; i < 10; i++)
//	{
//		arr[i] = i + 10;
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	delete[] arr;
//}
//int main() {
//	test01();
//	test02();
//	return 0;
//}
//int& Test01() {
//	int a = 10;
//	return a;
//}
//int& Test02() {
//	static int a = 10;
//	return a;
//}
//
//int main() {
//	/*int a = 10;
//	int& b = a;*/
//	/*int &ref = Test01();
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;*/
//	int& ref = Test02();
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//	Test02() = 1000;
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//	return 0;
//}
//void func() {
//	cout << "func()函数的调用" << endl;
//}
//void func(int a) {
//	cout << "func(int a)函数的调用" << endl;
//}
//void func(double a) {
//	cout << "func(double a)函数的调用" << endl;
//}
//void func(int a,double b) {
//	cout << "func(int a,double b)函数的调用" << endl;
//}
//void func(double a, int b) {
//	cout << "func(double a, int b)函数的调用" << endl;
//}
//int main() {
//	/*func();
//	func(10);
//	func(3.14);*/
//	func(10, 3.14);
//	func(3.14, 10);
//
//	return 0;
//}
void func(int &a) {
	cout << "func(int &a)函数的调用" << endl;
}
void func(const int& a) {
	cout << "func(const int &a)函数的调用" << endl;
}
void func2(int a) {
	cout << "func2(int a)函数的调用" << endl;
}
void func2(int a , int b = 10) {
	cout << "func2(int a , int b = 10)函数的调用" << endl;
}
int main() {
	/*const int a = 10;
	func(10);
	func(a);*/
	func2(10,20);//一个参数报错

	return 0;
}