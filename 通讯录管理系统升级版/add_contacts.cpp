#include"add_contacts.h"



void add_contact(books* uuu)
{
	string name;
	int sex;
	int age;
	long long tele;
	string address;

	cout << "please enter contacts name:" << endl;
	cin >> name;
	uuu->contact1[uuu->flag].name = name;
	cout << "please enter contacts sex:" << endl;
	cout << "1---Å®£¬2---ÄÐ" << endl;
	while (1)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			break;
		}
		cout << "please enter index again" << endl;
	}
	if (sex == 1)
	{
		uuu->contact1[uuu->flag].sex = "ÄÐ";
	}
	else
	{
		uuu->contact1[uuu->flag].sex = "Å®";
	}
	
	cout << "please enter contacts age:" << endl;
	cin >> age;
	uuu->contact1[uuu->flag].age = age;
	cout << "please enter contacts tele:" << endl;
	cin >> tele;
	uuu->contact1[uuu->flag].Tele = tele;
	cout << "please enter contacts address" << endl;
	cin >> address;
	uuu->contact1[uuu->flag].address = address;

	uuu->flag++;

	system("cls");
}