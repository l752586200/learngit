#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct destination
{
	string name;
	float evaluation;
	string price;
	string description;
};
int m2()
{
	destination d;
	int choose;
	while (true)
	{
	r:
		cout << "   ---***Ŀ�ĵ��Ƽ�ҳ��***----" << endl;
		cout << "      ***  ��ѡ��˵�   ***    " << endl;
		cout << "-----------------------------------" << endl;
		cout << "         1.�����" << endl;
		cout << "         2.������羰��     " << endl;
		cout << "         3.��Դ�ɹȷ羰��" << endl;
		cout << "         4.����̶�羰��" << endl;
		cout << "         5.������һ�ٷ羰��" << endl;
		cout << "�����������˽�����" << endl;
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
				infile.open("Ŀ�ĵ���Ϣ.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "�����")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "����:" << d.evaluation << endl;
					}
				}
				infile.close();
				break;
			}
			case(2):
			{
				ifstream infile;
				infile.open("Ŀ�ĵ���Ϣ.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "������羰��")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "����:" << d.evaluation << endl;
					}
				}
				infile.close();
				break;

			}
			case(3):
			{
				ifstream infile;
				infile.open("Ŀ�ĵ���Ϣ.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "��Դ�ɹȷ羰��")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "����:" << d.evaluation << endl;
					}
				}
				infile.close();
				break;

			}
			case(4):
			{
				ifstream infile;
				infile.open("Ŀ�ĵ���Ϣ.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "����̶�羰��")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "����:" << d.evaluation << endl;
					}
				}
				infile.close();
				break;

			}
			case(5):
			{
				ifstream infile;
				infile.open("Ŀ�ĵ���Ϣ.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "������һ�ٷ羰��")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "����:" << d.evaluation << endl;
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
	infile2.open("Ŀ�ĵ���Ϣ.txt");
	while (infile2 >> d.name)
	{
		n = n + 1;
	}//��ʱnΪtxt������
	n = n / 4;//��ʱnΪĿ�ĵصĸ���
	infile2.close();
	ifstream infile3;
	infile3.open("Ŀ�ĵ���Ϣ.txt");
	float *arr = new float[n];
	int i = 0;
	while (infile3 >> d.name >> d.description >> d.price >> d.evaluation)
	{
		arr[i] = d.evaluation;
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
s:	cout << "�����ǵص㰴���ֽ��������Ľ��" << endl;
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
			infile.open("Ŀ�ĵ���Ϣ.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[0])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "����:" << d.evaluation << endl;
				}
			}
			infile.close();
			break;
		}
		case(2):
		{
			ifstream infile;
			infile.open("Ŀ�ĵ���Ϣ.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[1])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "����:" << d.evaluation << endl;
				}
			}
			infile.close();
			break;

		}
		case(3):
		{
			ifstream infile;
			infile.open("Ŀ�ĵ���Ϣ.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[2])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "����:" << d.evaluation << endl;
				}
			}
			infile.close();
			break;

		}
		case(4):
		{
			ifstream infile;
			infile.open("Ŀ�ĵ���Ϣ.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[3])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "����:" << d.evaluation << endl;
				}
			}
			infile.close();
			break;

		}
		case(5):
		{
			ifstream infile;
			infile.open("Ŀ�ĵ���Ϣ.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[4])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "����:" << d.evaluation << endl;
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