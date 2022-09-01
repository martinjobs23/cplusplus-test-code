#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct Stu {
	string sName;
	int score;
};
struct Tea {
	string tName;
	struct Stu arrStu[5];
};

void allocateSpace(struct Tea tarray[],int len) {
	string nameSeed = "ABCDEF";
	for (int i = 0; i < len; i++) {
		tarray[i].tName = "Teacher_";
		tarray[i].tName += nameSeed[i];

		for (int j = 0; j < 5; j++) {
			tarray[i].arrStu[j].sName = "Student_";
			tarray[i].arrStu[j].sName += nameSeed[j];
			
			int score = rand() % 51+50;
			tarray[i].arrStu[j].score = score;
		}
	}
}
void PrintInfo(struct Tea tarray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "老师的姓名为：" << tarray[i].tName << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t学生姓名：" << tarray[i].arrStu[j].sName;
			cout << "\t考试分数：" << tarray[i].arrStu[j].score<<endl;
		}

	}
}
int main() {
	srand((unsigned int)time(NULL));
	struct Tea arrTea[3];
	int len = sizeof(arrTea) / sizeof(arrTea[0]);
	allocateSpace(arrTea, len);
	PrintInfo(arrTea, len);

	return 0;
}
