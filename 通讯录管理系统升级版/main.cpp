#include<iostream>         //Pre-processing Machine
using namespace std;       //ʹ�ô洢�ռ�std  �洢���´��루����ָ�

//****************  relevant function *********************//
#include"showmenu.h"      //��ʾ�˵�ͷ�ļ� head-file
#include"relevant_struct.h"
#include"add_contacts.h"
#include"display_contacts.h"
#include"delete_contacts.h"
#include"find_contacts.h"
#include"revise_contacts.h"

//*************** relevant struct/hong ********************//
//****************  extern vary  **************//
books contactsbook;   //����--->��Ƕ�׽ṹ�����
extern int flag = 0;  //��ʼ����ԱΪ 0

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
	
	
	return 0;              //���������־   Programming Close Mark 
}


void clear_contacts(books* uuu)
{
	uuu->flag = 0;
	cout << "clear success" << endl;
	system("pause");  //Close System
	system("cls");    //Clear Screen
}


//��д�ĳ�������Ҷ���ţ�ķ�ʽʵ����Ӧ�Ĺ��ܡ�
//�ĵã��ڷ��ر�־����������ý��ú����ķ���ֵ��ֵ��һ������
//��������ֻ����һ��
//���ʵ�ֳ��򣬲����鱾��˼�룬����ʵ���Զ�һ������ͬ�˲�ͬ˼�롣
//����Ƕ�׽ṹ��˼��ʵ����Ա��������ȷ����