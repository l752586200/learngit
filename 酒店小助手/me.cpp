#include"stdafx.h"
#include "Me.h"
#include<iostream>
#include<fstream>
#include"square.h"
#include <regex> 
using namespace std;
Me::Me()
{
	MyVipLevel = 0;
	myage = 18;
	mycity = "����";
	myindent = 0;
	mymessage = 0;
	mysex = "��";
	hotel_name = "123";
	myindent = 2500;
	hotel_city = "123";
	hotel_money = 0;
}
void Me::My_initialization()
{
	struct my
	{
		string name;
		string sex;
		string age;
		string city;
		string myp;
	};
	my m;
	cout << "�����û���Ϊ��" << endl;
	cin >> myname;
	cout << "�����Ա�Ϊ��" << endl;
	cin >> mysex;
	cout << "��������Ϊ��" << endl;
	cin >> myage;
	cout << "�����ڵĳ����ǣ�" << endl;
	cin >> mycity;
	cout << "�����ֻ���Ϊ��" << endl;
	cin >> my_mbp;
	ifstream infile;
	infile.open("�û���Ϣ.txt");
	while (infile >> m.name >> m.age >> m.sex >> m.city >> m.myp)
	{
		if (myname == m.name)
		{
			cout << "�û����ظ�������������" << endl;
			cin >> myname;

		}
	}
	infile.close();
	ofstream outfile("�û���Ϣ.txt", ios::app);
	if (!outfile)
	{
		cerr << "error" << endl;
		exit(1);
	}
	else
	{
		outfile << myname << endl;
		outfile << myage << endl;
		outfile << mysex << endl;
		outfile << mycity << endl;
		outfile << my_mbp << endl;
	}
	outfile.close();
	ofstream oufile("�û���.txt", ios::app);
	if (!oufile)
	{
		cerr << "error" << endl;
		exit(1);
	}
	else
	{
		oufile << myname;
	}
	oufile.close();
}
void Me::My_sumindent()
{

}
void Me::My_discount()//�ҵ��ۿ�
{
	if (MyVipLevel == 0)
	{
		cout << "�������ǻ�Ա���������ۿ�" << endl;
		cout << "��һ����Ա��������" << 1000 - myindent << "Ԫ" << endl;
	}
	if (MyVipLevel == 1)
	{
		cout << "�����Ƶ�ʱ����95��" << endl;
		cout << "��һ����Ա��������" << 2000 - myindent << "Ԫ" << endl;
	}
	if (MyVipLevel == 2)
	{
		cout << "�����Ƶ�ʱ����9��" << endl;
		cout << "��һ����Ա��������" << 3000 - myindent << "Ԫ" << endl;
	}
	if (MyVipLevel == 3)
	{
		cout << "�����Ƶ�ʱ����85��" << endl;
		cout << "���Ѿ�����߼���Ա,��л����֧��" << endl;
	}
}
void Me::My_indent()
{
	if (hotel_name == "123")
	{
		cout << "�޶���" << endl;
	}
	else if (hotel_city == "123")
	{
		cout << "�޶���" << endl;
	}
	else if (hotel_money == 0)
	{
		cout << "�޶���" << endl;
	}
	else
	{
		cout << "�ҵĶ�����" << endl;
		cout << "�Ƶ�����" << hotel_name << endl;
		cout << "�Ƶ�λ��" << hotel_city << endl;
		cout << "������" << hotel_money << endl;
	}
	My_message();
}
void Me::My_message()
{
	cout << "�ҵ��û���Ϊ��" << myname << endl;
	cout << "�ҵĻ�Ա�ȼ�Ϊ��" << MyVipLevel << endl;
	My_discount();
	if (mymessage > 0)
	{
		cout << "�ҵ�δ����Ϣ��" << mymessage << "��" << endl;
		cout << "����1���鿴δ����Ϣ" << endl;
		cout << "����2���鿴�ҵĶ�����Ϣ" << endl;
		cout << "����3���鿴�ҵ��ۿ���Ϣ" << endl;
		cout << "����4�����Ƶ�" << endl;
		cout << "����5�鿴�ҵĶ�̬" << endl;
		int judge = 0;
		cin >> judge;
		if (judge == 1)
		{
			cout << mynote << endl;
		}
		if (judge == 2)
		{
			My_indent();
		}
		if (judge == 3)
		{
			My_discount();
		}
		if (judge == 4)
		{
			Indent();
		}
		if (judge == 5)
		{
			My_post();
		}
	}
	else if (mymessage == 0)
	{
		int judge = 0;
		cout << "����1���鿴�ҵĶ�����Ϣ" << endl;
		cout << "����2���鿴�ҵ��ۿ���Ϣ" << endl;
		cout << "����3�����Ƶ�" << endl;
		cout << "����4�鿴�ҵĶ�̬" << endl;
		cin >> judge;
		if (judge == 1)
		{
			My_indent();
		}
		if (judge == 2)
		{
			My_discount();
		}
		if (judge == 3)
		{
			Indent();
		}
		if (judge == 4)
		{
			My_post();
		}
	}
}
void Me::My_VIP()
{
	MyVipLevel = 0;
	if (myindent < 1000)
	{
		MyVipLevel = 1;
	}
	else if (myindent < 2000)
	{
		MyVipLevel = 2;
	}
	else if (myindent < 3000)
	{
		MyVipLevel = 3;
	}
	My_message();
}
void Me::Indent()
{
	cout << "������Ƶ�����" << endl;
	cin >> hotel_name;
	cout << "����Ҫ���þƵ��࣬����Ϊhotel_name" << endl;
	cout << "�������ͣ����ˣ�1����˫�ˣ�2������" << endl;
	int judge0 = 0;
	cin >> judge0;
	if (judge0 == 1)
	{
		cout << "�Ƶ���Ϣ" << endl;
	}
	if (judge0 == 2)
	{
		cout << "�Ƶ���Ϣ" << endl;
	}
	cout << "���Ƿ�ҪԤ������Ƶꣿy(��)n(����)" << endl;
	string judge;
	cin >> judge;
	if (judge == "y")
	{
		if (!regex_match(my_mbp, regex("//d{11}")))
		{
			cout << "���������ֻ���" << endl;
			cin >> my_mbp;
		}
		if (!regex_match(myname, regex("//z{2}||z{3}")))
		{
			cout << "����������" << endl;
			cin >> myname;
		}
		if (!regex_match(mysex, regex("//z{1}")))
		{
			cout << "����������" << endl;
			cin >> myname;
		}
		if (!regex_match(mysex, regex("//d{3}||d{2}||d{4}")))
		{
			cout << "���������" << endl;
			cin >> mycity;
		}
		ofstream outfile("�Ƶ궩����Ϣ.txt");
		if (!outfile)
		{
			cerr << "error" << endl;
			exit(1);
		}
		else
		{
			outfile << myname << endl;
			outfile << mysex << endl;
			outfile << mycity << endl;
			outfile << my_mbp << endl;
		}
		outfile.close();
	}
	My_message();
}
void Me::My_post()
{
	cout << "д��̬(1)" << "  " << "�ҵĶ�̬(2)" << endl;
	int judge;
	cin >> judge;
	if (judge == 1)
	{
		post myname;
		myname.write_post();
		My_message();
	}
	if (judge == 2)
	{
		cout << "�ҵĶ�̬" << endl;
		char ch;
		ifstream infile;
		infile.open("dongtai.txt");
		if (!infile)
		{
			cerr << "error" << endl;
			exit(1);
		}
		while (!infile.eof())
		{
			infile.get(ch);
			cout << ch;
		}
		infile.close();
		My_message();
	}
}