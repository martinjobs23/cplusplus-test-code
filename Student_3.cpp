//
//  Student_3.cpp
//  object
//
//  Created by DFH on 2022/7/29.
//

#include <stdio.h>
#include <iostream>
using namespace std;

const unsigned int ARRAY_SIZE1 = 20;
const unsigned int ARRAY_SIZE2 = 12;

struct Student{
    char name[ARRAY_SIZE1];
    char ID[ARRAY_SIZE2];
    char sex;
    char major[ARRAY_SIZE1];
};

void DisplayInfo(Student student);
void DisplayInfo(int nStudentNumber);
int nStudentNumber = 0;

//void Studentstat(Student *aStudent,int nNumber,int &rnMaleNumber ,int &rnFemaleNumber ){
//    for (int i =0; i<nNumber; i++) {
//        if (aStudent[i].sex=='1')
//            rnMaleNumber++;
////            (*pnMaleNumber)++;
//        else
//            rnFemaleNumber++;
////            (*pnFemaleNumber)++;
//    }
//}
int main() {
    //int *pnNumber;
    int nStudentNumber = 0;
//    cout<<"请输入学生的人数：\n";
    Student Student1;
    ::nStudentNumber++;
    cout<<"姓名:\n";
    cin>>Student1.name;
    cout<<"编号:\n";
    cin>>Student1.ID;
    cout<<"性别为:1.男生，0女生\n";
    cin>>Student1.sex;
    cout<<"专业:\n";
    cin>>Student1.major;
//    cout<<"第"<<i+1<<"名学生的姓名为："<<aStudent[i].name<<"\n学生编号为："<<aStudent[i].ID<<"\n学生的性别为：";
//    if(aStudent[i].sex)
//        cout<<"男";
//    else
//        cout<<"女";
//    cout<<"\n学生的专业为："<<aStudent[i].major<<"\n";
    DisplayInfo(Student1);
    DisplayInfo(::nStudentNumber);

    return 0;
}
void DisplayInfo(Student student){
        cout<<"学生的姓名为："<<student.name<<"\n学生编号为："<<student.ID<<"\n学生的性别为：";
        if(student.sex)
            cout<<"男";
        else
            cout<<"女";
        cout<<"\n学生的专业为："<<student.major<<"\n";
}
void DisplayInfo(int nStudentNumber){
    cout<<"学生的人数为"<<nStudentNumber<<endl;
}
