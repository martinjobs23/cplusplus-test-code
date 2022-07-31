//
//  Student_4.cpp
//  object
//
//  Created by DFH on 2022/7/29.
//

#include <stdio.h>
using namespace std;
#include <iostream>

const unsigned int ARRAY_SIZE1 = 20;
const unsigned int ARRAY_SIZE2 = 12;

struct Student{
    char name[ARRAY_SIZE1];
    char ID[ARRAY_SIZE2];
    char sex;
    char major[ARRAY_SIZE1];
};
//带默认参数的函数， nLanType：0为中文，1为英文。
void InputInfo(Student &student, int nLanType = 0);
void DisplayInfo(Student student,int nLanType = 0);
void DisplayInfo(int nStudentNumber,int nLanType = 0);
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
    int LanType = 0;
    
    cout<<"请选择语言：0为中文，1位英文\nPlease choose your language:0 for Chinese ,1 for English.\n";
    cin>>LanType;
    Student Student1;
    ::nStudentNumber++;
//    cout<<"第"<<i+1<<"名学生的姓名为："<<aStudent[i].name<<"\n学生编号为："<<aStudent[i].ID<<"\n学生的性别为：";
//    if(aStudent[i].sex)
//        cout<<"男";
//    else
//        cout<<"女";
//    cout<<"\n学生的专业为："<<aStudent[i].major<<"\n";
    InputInfo(Student1,LanType);
    DisplayInfo(Student1,LanType);
    DisplayInfo(::nStudentNumber,LanType);

    return 0;
}

void InputInfo(Student &student,int nLanType){
    if (nLanType == 0) {
        cout<<"姓名:";
        cin>>student.name;
        cout<<"编号:";
        cin>>student.ID;
        cout<<"性别为1.男生，0女生";
        cin>>student.sex;
        cout<<"专业:";
        cin>>student.major;
    }
    else{
        cout<<"Input Name:";
        cin>>student.name;
        cout<<"Input Id:";
        cin>>student.ID;
        cout<<"Input sex 1.Male,0.Female";
        cin>>student.sex;
        cout<<"Input major:";
        cin>>student.major;    }
    
}

void DisplayInfo(Student student,int nLanType){
    if (nLanType == 0) {
        cout<<"学生的姓名为："<<student.name<<"\n学生编号为："<<student.ID<<"\n学生的性别为：";
        if(student.sex)
            cout<<"男";
        else
            cout<<"女";
        cout<<"\n学生的专业为："<<student.major<<"\n";
    }
    else{
        cout<<"The Student's Name is "<<student.name<<"\nStudent's Id is "<<student.ID<<"\nStudent's sex is ";
        if(student.sex)
            cout<<"Male";
        else
            cout<<"Female";
        cout<<"\nStudent's major is "<<student.major<<"\n";    }
}
void DisplayInfo(int nStudentNumber,int nLanType){
    if (nLanType == 0) {
    cout<<"学生的人数为"<<nStudentNumber<<endl;
    }
    else
        cout<<"StudentNumber is "<<nStudentNumber<<endl;
}
