#include<iostream>         //Pre-processing Machine
using namespace std;       //使用存储空间std  存储以下代码（编译指令）

//****************  relevant function *********************//
#include"showmenu.h"      //显示菜单头文件 head-file
#include"relevant_struct.h"
#include"add_contacts.h"
#include"display_contacts.h"
#include"delete_contacts.h"
#include"find_contacts.h"
#include"revise_contacts.h"

//*************** relevant struct/hong ********************//
//****************  extern vary  **************//
books contactsbook;   //定义--->外嵌套结构体变量
extern int flag = 0;  //初始化成员为 0

//*************** relevant sub_function********************//
void clear_contacts(books* uuu);

//**********************  Main function ***************************//

int main()
{
	
	int number1 = 8;  //initialize index for Choose Object
	
	while(1)
	{ 
	showmenu();  //display menu item
	cin >> number1; 
	switch (number1)
	{
	//Add contacts
		case 0:
			add_contact(&contactsbook);
			break;

	//dispaly contacts
		case 1:
			display(&contactsbook);
			break;

	//delete contacts
		case 2:
			delete1(&contactsbook);
			break;

	//find contacts
		case 3:
			find_contacts(&contactsbook);
			break;

	//revise contacts
		case 4:
			rivise_contacts(&contactsbook);
			break;

	//clear contacts
		case 5:
			clear_contacts(&contactsbook);
			break;

	//Close Communications
		case 6:
			system("cls");    //Clear Screen
			system("pause");  //Close System
			break;

	}
	}
	
	
	return 0;              //程序结束标志   Programming Close Mark 
}


void clear_contacts(books* uuu)
{
	uuu->flag = 0;
	cout << "clear success" << endl;
	system("pause");  //Close System
	system("cls");    //Clear Screen
}


//编写的程序采用庖丁解牛的方式实现相应的功能。
//心得：在返回标志类程序调用最好将该函数的返回值赋值给一个变量
//这样程序只运行一次
//设计实现程序，采用书本的思想，人其实特性都一样，不同人不同思想。
//采用嵌套结构的思想实现人员和数量的确定。