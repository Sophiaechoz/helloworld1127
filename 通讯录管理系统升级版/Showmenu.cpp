#include<iostream>      //Pre-processing Machine
using namespace std;    //使用存储空间std  存储以下代码（编译指令）
#include"showmenu.h"

void showmenu(void)
{
	cout << "************************" << endl;
	cout << "*****\t0  添加联系人\t*****" << endl;
	cout << "*****\t1  显示联系人\t*****" << endl;
	cout << "*****\t2  删除联系人\t*****" << endl;
	cout << "*****\t3  查找联系人\t*****" << endl;
	cout << "*****\t4  修改联系人\t*****" << endl;
	cout << "*****\t5  清空联系人\t*****" << endl;
	cout << "*****\t6  退出通讯录\t*****" << endl;
	cout << "please eneter any index to choose some function" << endl;

}