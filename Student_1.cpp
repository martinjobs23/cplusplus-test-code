//
//  main.cpp
//  object
//
//  Created by DFH on 2022/7/22.
//

#include <iostream>
using namespace std;

struct Student{
    char name[10];
    char ID[12];
    char sex;
    char major[20];
};

void Studentstat(Student *aStudent,int nNumber,int *pnMaleNumber,int *pnFemaleNumber){
    for (int i =0; i<nNumber; i++) {
        if (aStudent[i].sex=='1')
            (*pnMaleNumber)++;
        else
            (*pnFemaleNumber)++;
    }
}


int main(int argc, const char * argv[]) {
    int *pnNumber;
    pnNumber = new int ;
    cout<<"请输入学生的人数：\n";
    cin>>*pnNumber;
    Student *aStudent;
    aStudent = new Student[*pnNumber];
    for (int i = 0; i<*pnNumber; i++) {
        cout<<"请输入第"<<i+1<<"位学生的信息:\n";
        cout<<"姓名:\n";
        cin>>aStudent[i].name;
        cout<<"编号:\n";
        cin>>aStudent[i].ID;
        cout<<"性别为:1.男生，0女生\n";
        cin>>aStudent[i].sex;
        cout<<"专业:\n";
        cin>>aStudent[i].major;
    }
    for (int i=0; i<*pnNumber; i++) {
        cout<<"第"<<i+1<<"名学生的姓名为："<<aStudent[i].name<<"\n学生编号为："<<aStudent[i].ID<<"\n学生的性别为：";
        if(aStudent[i].sex)
            cout<<"男";
        else
            cout<<"女";
        cout<<"\n学生的专业为："<<aStudent[i].major<<"\n";
        
    }
    int m=0,f=0;
    int *pnMaleNumber = &m;
    int *pnFemaleNumber = &f;
    Studentstat(aStudent,*pnNumber,pnMaleNumber,pnFemaleNumber);
    
    cout<<"男生的数量为："<<*pnMaleNumber<<"\n";
    cout<<"女生的数量为："<<*pnFemaleNumber<<"\n";
    
    delete pnNumber;
    delete [] aStudent;

//    Student std1;
//    cout<<"姓名:\n";
//    cin>>std1.name;
//    cout<<"编号:\n";
//    cin>>std1.ID;
//    cout<<"性别为:1.男生，0女生\n";
//    cin>>std1.sex;
//    cout<<"专业:\n";
//    cin>>std1.major;
//    cout<<"该学生的信息为：\n";
    return 0;
}
