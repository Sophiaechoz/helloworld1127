#include"delete_contacts.h"
//delete relevant contacts according to user's enter name.
//����ָ������ϵ��
//ƥ���Ƿ���ڸ���ϵ��
//1.consist  ��ָ�����֮�����ϵ����ǰ���ǣ�����Сһλ����
//2.unconsist����ʾ�����ڸ���ϵ��
int check_consist(books* uuu)
{
	string name1 ;
	int flag1=-1;    //�жϱ�־λ check standard bit
	cout << "please enter you want to delete/find names:" << endl;
	cin >>name1;
	for (int i = 0; i < uuu->flag; i++)     //ֻҪ¼��flag����1.���û¼���ǲ���ִ�е� 
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
//ɾ����ϵ��,����������ѭÿ�ζ�����뺯���壬Ϊ�˷�ֹ�ظ�����
//���Խ������ķ���ֵ�洢��һ����ͨ�����С�
void delete1(books* uuu)
{
	int a=check_consist(uuu);
	
	if (a != -1)
	{
		//ɾ����ϵ��ָ����ϵ�ˣ���λ���ǲ���
		for (int i = a; i < uuu->flag; i++)
		{
			uuu->contact1[a] = uuu->contact1[a + 1];
		}
		uuu->flag -= 1;
		cout << "ɾ���ɹ���" << endl;
		
	}
	else
	{
		cout << "��������ϵ��,����������" << endl;
	}
	system("pause");    //�����������
	system("cls");      //�����Ļclear screen

}