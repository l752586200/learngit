#include "stdafx.h"
#include"标头.h"
#include"标头1.h"
#include"Me.h"
#include"square.h"
#include"标头2.h"
#include"标头3.h"
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
	cout << "菜单：" << endl;
	cout << "（1）酒店发现" << "\t";
	cout << "(2)我" << "\t";
	cout << "(3)酒店推荐和目的地推荐" << endl;
	}
void Operator4::OPerator()
{
	int i;
	cout << "是否拥有账号" << endl;
	cout << "(1).是" << "\t" << "(2).否" << endl;
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
		cout << "请问您是要看推荐还是直接搜索酒店" << endl;
		cout << "(1)看推荐" << "\t";
		cout << "(2)搜索" << endl;
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
	cout << "请输入3来查看我的信息" << endl;
	cin >> judge;
	if (judge == 3)
	{
		m.My_message();
	}
}
void Operator3::OPerator4()
{
	cout << "(1)酒店类型推荐：" << "\t";
	cout << "(2)目的地推荐：" << endl;
	cout << "请按照编号输入!" << endl;
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