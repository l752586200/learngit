#include <iostream> 
#include<fstream>
#include<string>
#include<cstring>
#include<conio.h>
#include<math.h>
using namespace std;
struct user
{
	string password;
	string name;
}; user c, c1;
int regist()//注册
{
	p:
	string name;
	ifstream infile;
	infile.open("D:\\user.txt", ios::in);
	if (!infile)
	{
	cerr << "error" << endl;
	abort();
	}
	else
	{
		cout << "请输入用户名:";
		cin >> name;
		while (infile >> c.name >> c.password)//读取成功返回1
		{
			if (c.name == name)
			{
				cout << "该用户名已存在" << endl;
				goto p;
			}
		}
		cout << "请输入密码（至少包含8个数字和小写字母,至多20位）:";
		int size = 20;
		char *password = new char[size];
		int i = 0;
		char d;
		while ((d = _getch()) != '\r')
		{
			if (d == 8)//ASCII码8为退格
			{
				if (i == 0)
				{
					continue;
				}
				putchar('\b');
				putchar(' ');
				putchar('\b');
				i--;
			}
			if (i == size - 1)
			{
				continue;
			}
			if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z') || (d >= '0' && d <= '9'))//只能允许输入字母大小写和数字，不支持字符！！！！
			{
				putchar('*');
				password[i] = d;
				i++;
			}
		}
		password[i] = '\0';
		cout << endl;
		int x, y;
		x = 0;
		y = 0;
		if (i< 8)
		{
			cout << "密码不符合要求！请重新输入!" << endl;
			goto p;
		}
		for (i = 0; i < 20; i++)
		{
			if (password[i] > '0' && password[i] < '9')
			{
				x++;
			}
			if (password[i] > 'a' && password[i] < 'z')
			{
				y++;
			}
		}
		if (x == 0 || y == 0)
		{
			cout << "密码不符合要求！请重新输入!" << endl;
			goto p;
		}
		cout << "再次输入密码:";
		char *password2 = new char[20];
		i = 0;
		while ((d = _getch()) != '\r')
		{
			if (d == 8)//ASCII码8为退格
			{
				if (i == 0)
				{
					continue;
				}
				putchar('\b');
				putchar(' ');
				putchar('\b');
				i--;
			}
			if (i == size - 1)
			{
				continue;
			}
			if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z') || (d >= '0' && d <= '9'))//只能允许输入字母大小写和数字，不支持字符！！！！
			{
				putchar('*');
				password2[i] = d;
				i++;
			}
		}
		password2[i] = '\0';
		cout << endl;
		if (strcmp(password, password2) != 0)
		{
			cout << "两次密码输入不一致，请重新输入!" << endl;
			regist();
		}
		else
		{
			cout << "注册成功" << endl;
		}
		c1.name = name;
		c1.password = password;
		infile >> c1.name >> c1.password;
		infile.close();
	}
	ofstream outfile;
	outfile.open("D:\\user.txt", ios_base::out | ios_base::app);
	outfile << c1.name << endl;
	outfile << c1.password << endl;
	outfile.close();
	cout << endl;
	return 0;
}
int logo()//登录 
{
	int size = 20;
	char *password = new char[size];
	string name;
	cout << "用户名：";
	cin >> name;
	cout << "密码：";
	char d;
	int i = 0;
	while ((d = _getch()) != '\r')
	{
		if (d == 8)//ASCII码8为退格
		{
			if (i == 0)
			{
				continue;
			}
			putchar('\b');
			putchar(' ');
			putchar('\b');
			i--;
		}
		if (i == size - 1)
		{
			continue;
		}
		if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z') || (d >= '0' && d <= '9'))//只能允许输入字母大小写和数字，不支持字符！！！！
		{
			putchar('*');
			password[i] = d;
			i++;
		}
	}
	password[i] = '\0';
	cout << endl;
	ifstream fin;
	fin.open("D:\\user.txt", ios_base::in);
	if (fin.fail())
	{
		cerr << "error" << endl;
		abort();
	}
	user c;
	int m=0;
	while (fin >> c.name >> c.password)
	{
		if (c.name == name && c.password == password)
		{
			cout << "登陆成功" << endl;
			m = 1;//登录成功标志
		}
	}
	if (m==0)//m==0登录失败
	{
		cout << "用户名或密码错误"<<endl;
		logo();
	}
	return 0;
}
