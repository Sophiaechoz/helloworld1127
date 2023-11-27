#include"delete_contacts.h"
//delete relevant contacts according to user's enter name.
//输入指定的联系人
//匹配是否存在该联系人
//1.consist  ，指定序号之后的联系人向前覆盖，并减小一位数量
//2.unconsist，提示不存在该联系人
int check_consist(books* uuu)
{
	string name1 ;
	int flag1=-1;    //判断标志位 check standard bit
	cout << "please enter you want to delete/find names:" << endl;
	cin >>name1;
	for (int i = 0; i < uuu->flag; i++)     //只要录入flag就是1.如果没录入是不会执行的 
	{
		if (name1 == uuu->contact1[i].name)
		{
			flag1 = i;
			break;
		}
	}
	if (flag1 !=-1)
	{
		return flag1;
	}
	else
	{
		return -1;
	}
}
//删除联系人,程序运行遵循每次都会进入函数体，为了防止重复运行
//可以将函数的返回值存储在一个普通变量中。
void delete1(books* uuu)
{
	int a=check_consist(uuu);
	
	if (a != -1)
	{
		//删除联系人指定联系人，移位覆盖操作
		for (int i = a; i < uuu->flag; i++)
		{
			uuu->contact1[a] = uuu->contact1[a + 1];
		}
		uuu->flag -= 1;
		cout << "删除成功！" << endl;
		
	}
	else
	{
		cout << "不存在联系人,请重新输入" << endl;
	}
	system("pause");    //按任意键结束
	system("cls");      //清除屏幕clear screen

}