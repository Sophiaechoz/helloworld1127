#include"display_contacts.h"

void display(books* uuu)
{
	if (uuu->flag == 0)
	{
		cout << "û����Ա��¼��" << endl;
	}
	else
	{
		for (int i = 0; i < uuu->flag; i++)
		{
			cout << uuu->contact1[i].name << "\t";
			cout << uuu->contact1[i].sex << "\t";
			cout << uuu->contact1[i].age << "\t";
			cout << uuu->contact1[i].Tele << "\t";
			cout << uuu->contact1[i].address << endl;
		}

	}
	system("pause");     //press any key close 
	system("cls");       //clear screen

}