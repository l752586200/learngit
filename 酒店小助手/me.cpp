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
	mycity = "北京";
	myindent = 0;
	mymessage = 0;
	mysex = "男";
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
	cout << "您的用户名为：" << endl;
	cin >> myname;
	cout << "您的性别为：" << endl;
	cin >> mysex;
	cout << "您的年龄为：" << endl;
	cin >> myage;
	cout << "您所在的城市是：" << endl;
	cin >> mycity;
	cout << "您的手机号为：" << endl;
	cin >> my_mbp;
	ifstream infile;
	infile.open("用户信息.txt");
	while (infile >> m.name >> m.age >> m.sex >> m.city >> m.myp)
	{
		if (myname == m.name)
		{
			cout << "用户名重复，请重新输入" << endl;
			cin >> myname;

		}
	}
	infile.close();
	ofstream outfile("用户信息.txt", ios::app);
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
	ofstream oufile("用户名.txt", ios::app);
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
void Me::My_discount()//我的折扣
{
	if (MyVipLevel == 0)
	{
		cout << "您还不是会员，不享受折扣" << endl;
		cout << "距一级会员还需消费" << 1000 - myindent << "元" << endl;
	}
	if (MyVipLevel == 1)
	{
		cout << "您订酒店时享受95折" << endl;
		cout << "距一级会员还需消费" << 2000 - myindent << "元" << endl;
	}
	if (MyVipLevel == 2)
	{
		cout << "您订酒店时享受9折" << endl;
		cout << "距一级会员还需消费" << 3000 - myindent << "元" << endl;
	}
	if (MyVipLevel == 3)
	{
		cout << "您订酒店时享受85折" << endl;
		cout << "您已经是最高级会员,感谢您的支持" << endl;
	}
}
void Me::My_indent()
{
	if (hotel_name == "123")
	{
		cout << "无订单" << endl;
	}
	else if (hotel_city == "123")
	{
		cout << "无订单" << endl;
	}
	else if (hotel_money == 0)
	{
		cout << "无订单" << endl;
	}
	else
	{
		cout << "我的订单：" << endl;
		cout << "酒店名称" << hotel_name << endl;
		cout << "酒店位置" << hotel_city << endl;
		cout << "订单金额：" << hotel_money << endl;
	}
	My_message();
}
void Me::My_message()
{
	cout << "我的用户名为：" << myname << endl;
	cout << "我的会员等级为：" << MyVipLevel << endl;
	My_discount();
	if (mymessage > 0)
	{
		cout << "我的未读信息有" << mymessage << "个" << endl;
		cout << "输入1来查看未读信息" << endl;
		cout << "输入2来查看我的订单信息" << endl;
		cout << "输入3来查看我的折扣信息" << endl;
		cout << "输入4来订酒店" << endl;
		cout << "输入5查看我的动态" << endl;
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
		cout << "输入1来查看我的订单信息" << endl;
		cout << "输入2来查看我的折扣信息" << endl;
		cout << "输入3来订酒店" << endl;
		cout << "输入4查看我的动态" << endl;
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
	cout << "请输入酒店名称" << endl;
	cin >> hotel_name;
	cout << "这里要调用酒店类，对象为hotel_name" << endl;
	cout << "房间类型：单人（1），双人（2）。。" << endl;
	int judge0 = 0;
	cin >> judge0;
	if (judge0 == 1)
	{
		cout << "酒店信息" << endl;
	}
	if (judge0 == 2)
	{
		cout << "酒店信息" << endl;
	}
	cout << "您是否要预定这个酒店？y(是)n(不是)" << endl;
	string judge;
	cin >> judge;
	if (judge == "y")
	{
		if (!regex_match(my_mbp, regex("//d{11}")))
		{
			cout << "请您输入手机号" << endl;
			cin >> my_mbp;
		}
		if (!regex_match(myname, regex("//z{2}||z{3}")))
		{
			cout << "请输入名字" << endl;
			cin >> myname;
		}
		if (!regex_match(mysex, regex("//z{1}")))
		{
			cout << "请输入名字" << endl;
			cin >> myname;
		}
		if (!regex_match(mysex, regex("//d{3}||d{2}||d{4}")))
		{
			cout << "请输入城市" << endl;
			cin >> mycity;
		}
		ofstream outfile("酒店订单信息.txt");
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
	cout << "写动态(1)" << "  " << "我的动态(2)" << endl;
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
		cout << "我的动态" << endl;
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