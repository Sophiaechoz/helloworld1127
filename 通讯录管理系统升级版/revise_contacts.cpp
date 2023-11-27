#include"revise_contacts.h"
//revise relevant contacts
void rivise_contacts(books* uuu)
{
	int a = check_consist(uuu);
	string name1;
	string sex1;
	int age1;
	long long tele1;
	string address1;

	if (a == -1)
	{
		cout << "不存在该联系人" << endl;
	}
	else
	{
		cout << "please enter rivise name:" << endl;
		cin >> name1;
		uuu->contact1[a].name = name1;
		cout << "please enter rivise sex:" << endl;
		cin >> sex1;
		uuu->contact1[a].sex = sex1;
		cout << "please enter rivise age:" << endl;
		cin >> age1;
		uuu->contact1[a].age = age1;
		cout << "please enter rivise telephone number:" << endl;
		cin >> tele1;
		uuu->contact1[a].Tele = tele1;
		cout << "please enter rivise address:" << endl;
		cin >> address1;
		uuu->contact1[a].address = address1;

	}
	system("pause");
	system("cls");
}
