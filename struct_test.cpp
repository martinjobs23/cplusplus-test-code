#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//
//struct Stu {
//	string sName;
//	int score;
//};
//struct Tea {
//	string tName;
//	struct Stu arrStu[5];
//};
//
//void allocateSpace(struct Tea tarray[],int len) {
//	string nameSeed = "ABCDEF";
//	for (int i = 0; i < len; i++) {
//		tarray[i].tName = "Teacher_";
//		tarray[i].tName += nameSeed[i];
//
//		for (int j = 0; j < 5; j++) {
//			tarray[i].arrStu[j].sName = "Student_";
//			tarray[i].arrStu[j].sName += nameSeed[j];
//			
//			int score = rand() % 51+50;
//			tarray[i].arrStu[j].score = score;
//		}
//	}
//}
//void PrintInfo(const struct Tea tarray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "老师的姓名为：" << tarray[i].tName << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "\t学生姓名：" << tarray[i].arrStu[j].sName;
//			cout << "\t考试分数：" << tarray[i].arrStu[j].score<<endl;
//		}
//
//	}
//}
//int main() {
//	srand((unsigned int)time(NULL));
//	struct Tea arrTea[3];
//	int len = sizeof(arrTea) / sizeof(arrTea[0]);
//	allocateSpace(arrTea, len);
//	PrintInfo(arrTea, len);
//
//	return 0;
//}

//设计一个英雄的结构体，包含姓名，年龄，性别，数组中存放五个英雄名，通过冒泡排序法升序排列
struct Hero {
	string Name;
	int Age;
	string Sex;
};

void allocateSpace(struct Hero *arr, int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		cout << "请输入英雄的姓名：";
		cin >> arr[i].Name;
		cout << "请输入英雄的年龄：";
		cin >> arr[i].Age;
		cout << "请输入英雄的性别：";
		cin >> arr[i].Sex;
	}
}
int cmp_by_age(const void* e1, const void* e2) {
	return (int)(((struct Hero*)e1)->Age - ((struct Hero*)e2)->Age);
}
void PrintInfo(const struct Hero arr[], int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		cout << "英雄的姓名："<< arr[i].Name<<"\t";
		cout << "英雄的年龄："<<arr[i].Age << "\t";
		cout << "请输入英雄的性别："<< arr[i].Sex<<endl;
	}
}
void Bubble_sort(struct Hero* arr, int len) {
	int i = 0;
	for ( i = 0; i < len-1; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < len-1-i; j++)
		{
			if (arr[j].Age > arr[j + 1].Age) {
				struct Hero tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
}
int main() {
	Hero arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	allocateSpace(arr,len);
	PrintInfo(arr, len);
	//qsort(arr, len, sizeof(arr[0]), cmp_by_age);
	Bubble_sort(arr, len);
	cout << "排序后：" << endl;
	PrintInfo(arr, len);
	return 0;
}
