
#include"stdafx.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct hotel
{
	string name;
	float kobei;
	string piaowu;
	string jiehsao;
};
int m1()
{
	hotel h;
	int choose;
	while (true)
	{
	r:
		cout << "             ---***�Ƶ��Ƽ�ҳ��***----" << endl;
		cout << "      ***  ��ѡ�������˽�ľƵ겢��������   ***    " << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "            1.��˷԰�־Ƶ�" << endl;
		cout << "            2.���ʦ    " << endl;
		cout << "            3.����Ƶ�" << endl;
		cout << "            4.��ɫ��ջ" << endl;
		cout << "            5.�����Ƶ�" << endl;
		cout << "            �����������˽�����" << endl;
		cin >> choose;
		if (choose <= 0 || choose > 5)
		{
			cout << "����������������������" << endl;
			goto r;
		}
		else
		{
			switch (choose)
			{
			case(1):
			{

				ifstream infile;
				infile.open("�Ƶ���Ϣ.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "��˷԰�־Ƶ�")
					{
						cout << h.name << endl;
						cout << "����:" << h.kobei << endl;
						cout << h.jiehsao << endl;
						cout << h.piaowu << endl;
					}
				}
				infile.close();
				break;
			}
			case(2):
			{
				ifstream infile;
				infile.open("�Ƶ���Ϣ.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "���ʦ�Ƶ�")
					{
						cout << h.name << endl;
						cout << "����:" << h.kobei << endl;
						cout << h.jiehsao << endl;
						cout << h.piaowu << endl;
					}
				}
				infile.close();
				break;
			}
			case(3):
			{

				ifstream infile;
				infile.open("�Ƶ���Ϣ.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "����Ƶ�")
					{
						cout << h.name << endl;
						cout << "����:" << h.kobei << endl;
						cout << h.jiehsao << endl;
						cout << h.piaowu << endl;
					}
				}
				infile.close();
				break;
			}
			case(4):
			{
				ifstream infile;
				infile.open("�Ƶ���Ϣ.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "��ɫ��ջ")
					{
						cout << h.name << endl;
						cout << "����:" << h.kobei << endl;
						cout << h.jiehsao << endl;
						cout << h.piaowu << endl;
					}
				}
				infile.close();
				break;
			}
			case(5):
			{
				ifstream infile;
				infile.open("�Ƶ���Ϣ.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "�����Ƶ�")
					{
						cout << h.name << endl;
						cout << "����:" << h.kobei << endl;
						cout << h.jiehsao << endl;
						cout << h.piaowu << endl;
					}
				}
				infile.close();
				break;
			}
			}
		}
		break;
	}
	int n = 0;
	ifstream infile2;
	infile2.open("�Ƶ���Ϣ.txt");
	while (infile2 >> h.name)
	{
		n = n + 1;
	}//��ʱnΪtxt������
	n = n / 4;//��ʱnΪĿ�ĵصĸ���
	infile2.close();
	ifstream infile3;
	infile3.open("�Ƶ���Ϣ.txt");
	float *arr = new float[n];
	int i = 0;
	while (infile3 >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
	{
		arr[i] = h.kobei;
		i = i + 1;
	}
	int j = 0;
	for (i = 0; i<n; i++)
		for (j = 0; j<n - i - 1; j++)
			if (arr[j] < arr[j + 1])
			{
				float temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
s:	cout << endl;
	cout << "�����ǵص㰴���ֽ��������Ľ��" << endl;
	for (i = 0; i < n; i++)
		cout << i + 1 << " " << arr[i] << endl;
	cout << "�����������˽�����" << endl;
	int t1;
	cin >> t1;
	if (t1 <= 0 || t1 > 5)
	{
		cout << "����������������������" << endl;
		goto s;
	}
	else
	{
		switch (t1)
		{
		case(1):

		{
			ifstream infile;
			infile.open("�Ƶ���Ϣ.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[0])
				{
					cout << h.name << endl;
					cout << "����:" << h.kobei << endl;
					cout << h.jiehsao << endl;
					cout << h.piaowu << endl;
				}
			}
			infile.close();
			break;
		}
		case(2):
		{
			ifstream infile;
			infile.open("�Ƶ���Ϣ.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[1])
				{
					cout << h.name << endl;
					cout << "����:" << h.kobei << endl;
					cout << h.jiehsao << endl;
					cout << h.piaowu << endl;
				}
			}
			infile.close();
			break;

		}
		case(3):
		{
			ifstream infile;
			infile.open("�Ƶ���Ϣ.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[2])
				{
					cout << h.name << endl;
					cout << "����:" << h.kobei << endl;
					cout << h.jiehsao << endl;
					cout << h.piaowu << endl;
				}
			}
			infile.close();
			break;

		}
		case(4):
		{
			ifstream infile;
			infile.open("�Ƶ���Ϣ.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[3])
				{
					cout << h.name << endl;
					cout << "����:" << h.kobei << endl;
					cout << h.jiehsao << endl;
					cout << h.piaowu << endl;
				}
			}
			infile.close();
			break;

		}
		case(5):
		{
			ifstream infile;
			infile.open("�Ƶ���Ϣ.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[4])
				{
					cout << h.name << endl;
					cout << "����:" << h.kobei << endl;
					cout << h.jiehsao << endl;
					cout << h.piaowu << endl;
				}
			}
			infile.close();
			break;

		}

		}
	}
	delete[]arr;
	infile3.close();
	return 0;
}

