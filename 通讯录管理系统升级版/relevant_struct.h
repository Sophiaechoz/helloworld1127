#ifndef _relevant_struct_H_
#define _relevant_struct_H_
#include<iostream>      //Pre-processing Machine
using namespace std;    //ʹ�ô洢�ռ�std  �洢���´��루����ָ�

#define Num 1000       //��¼����Ϊ100
extern struct contacts {
	string name;
	string sex;
	int age;
	long long Tele;
	string address;
};

extern struct books
{
	contacts contact1[Num];   //����һ��Ƕ�� �ṹ�����飨��typedef���ü�struct��
	int flag;                 //��¼ͨѶ¼���Ѿ���¼������
};


#endif
