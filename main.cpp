// ConsoleApplication4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Operator.h"
#include<iostream>
using namespace std;
int main()
{
	Operator3 o;
	Operator1 o1;
	Operator2 o2;
	Operator4 o3;
	 o3.OPerator();
	 p:
	 o3.OPErator();
	int x;
	cout << "请按照编号输入" << endl;
	cout << "如果您想退出请输入666" << endl;
	cin >> x;
	if (x == 1)
	{
		o1.OPerator2();
		goto p;
	}
	if (x == 2)
	{
		o2.OPerator3();
		goto p;
	}
	if (x == 3)
	{
		o.OPerator4();
		goto p;
	}
	if (x == 666)
	{
		return 0;
	}
	return 0;
}