#include"find_contacts.h"

void find_contacts(books* uuu)
{
	int a = check_consist(uuu);   
	if (a == -1)
	{
		cout << "不存在相关联系人" << endl;
	}
	else
	{
		cout << uuu->contact1[a].name << endl;
		cout << uuu->contact1[a].sex << endl;
		cout << uuu->contact1[a].age << endl;
		cout << uuu->contact1[a].address<< endl;
		cout << uuu->contact1[a].Tele << endl;
	}
	system("pause");
	system("cls");
}