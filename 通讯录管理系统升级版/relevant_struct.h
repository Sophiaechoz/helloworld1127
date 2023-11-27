#ifndef _relevant_struct_H_
#define _relevant_struct_H_
#include<iostream>      //Pre-processing Machine
using namespace std;    //使用存储空间std  存储以下代码（编译指令）

#define Num 1000       //记录人数为100
extern struct contacts {
	string name;
	string sex;
	int age;
	long long Tele;
	string address;
};

extern struct books
{
	contacts contact1[Num];   //定义一个嵌套 结构体数组（有typedef不用加struct）
	int flag;                 //记录通讯录中已经记录的人数
};


#endif
