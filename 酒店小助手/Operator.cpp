#include "stdafx.h"
#include"��ͷ.h"
#include"��ͷ1.h"
#include"Me.h"
#include"square.h"
#include"��ͷ2.h"
#include"��ͷ3.h"
#include <iostream> 
#include<fstream>
#include<string>
#include<cstring>
#include<conio.h>
#include<math.h>
#include<iostream>
#include"Operator.h"
using namespace std;

void Operator4::OPErator()
{
	cout << "�˵���" << endl;
	cout << "��1���Ƶ귢��" << "\t";
	cout << "(2)��" << "\t";
	cout << "(3)�Ƶ��Ƽ���Ŀ�ĵ��Ƽ�" << endl;
	}
void Operator4::OPerator()
{
	int i;
	cout << "�Ƿ�ӵ���˺�" << endl;
	cout << "(1).��" << "\t" << "(2).��" << endl;
	cin >> i;
	if (i == 2)
	{
		regist();
		logo();
	}
	else if (i == 1)
	{
		logo();
	}
	else
	{
		cerr << "error!" << endl;
		abort();
	}
}
void Operator1::OPerator2()
{
	ofstream m;
	m.open("D:\\f1.txt", ios_base::out | ios_base::app);
	if (m.fail())
	{
		cerr << "error!" << endl;
		abort();
	}
	else
	{
		int n;
		for (n = 0; n<30; n++)
		{
			m.write((char*)&s[n], sizeof(s[n]));
		}
		Recommend r;
		cout << "��������Ҫ���Ƽ�����ֱ�������Ƶ�" << endl;
		cout << "(1)���Ƽ�" << "\t";
		cout << "(2)����" << endl;
		int i;
		cin >> i;
		if (i == 1)
		{
			r.set1();
			r.set2();
			r.set3();
		}
		if (i == 2)
		{
			r.set4();
			r.set3();
		}
		m.close();
	}
}
void Operator2::OPerator3()
{
	Me m;
	square s;
	post p;
	m.My_initialization();
	int judge;
	cout << "������3���鿴�ҵ���Ϣ" << endl;
	cin >> judge;
	if (judge == 3)
	{
		m.My_message();
	}
}
void Operator3::OPerator4()
{
	cout << "(1)�Ƶ������Ƽ���" << "\t";
	cout << "(2)Ŀ�ĵ��Ƽ���" << endl;
	cout << "�밴�ձ������!" << endl;
	int y;
	cin >> y;
	if (y == 1)
	{
		m1();
	}
	if (y == 2)
	{
		m2();
	}
}