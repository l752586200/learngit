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
int regist()//ע��
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
		cout << "�������û���:";
		cin >> name;
		while (infile >> c.name >> c.password)//��ȡ�ɹ�����1
		{
			if (c.name == name)
			{
				cout << "���û����Ѵ���" << endl;
				goto p;
			}
		}
		cout << "���������루���ٰ���8�����ֺ�Сд��ĸ,����20λ��:";
		int size = 20;
		char *password = new char[size];
		int i = 0;
		char d;
		while ((d = _getch()) != '\r')
		{
			if (d == 8)//ASCII��8Ϊ�˸�
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
			if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z') || (d >= '0' && d <= '9'))//ֻ������������ĸ��Сд�����֣���֧���ַ���������
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
			cout << "���벻����Ҫ������������!" << endl;
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
			cout << "���벻����Ҫ������������!" << endl;
			goto p;
		}
		cout << "�ٴ���������:";
		char *password2 = new char[20];
		i = 0;
		while ((d = _getch()) != '\r')
		{
			if (d == 8)//ASCII��8Ϊ�˸�
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
			if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z') || (d >= '0' && d <= '9'))//ֻ������������ĸ��Сд�����֣���֧���ַ���������
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
			cout << "�����������벻һ�£�����������!" << endl;
			regist();
		}
		else
		{
			cout << "ע��ɹ�" << endl;
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
int logo()//��¼ 
{
	int size = 20;
	char *password = new char[size];
	string name;
	cout << "�û�����";
	cin >> name;
	cout << "���룺";
	char d;
	int i = 0;
	while ((d = _getch()) != '\r')
	{
		if (d == 8)//ASCII��8Ϊ�˸�
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
		if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z') || (d >= '0' && d <= '9'))//ֻ������������ĸ��Сд�����֣���֧���ַ���������
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
			cout << "��½�ɹ�" << endl;
			m = 1;//��¼�ɹ���־
		}
	}
	if (m==0)//m==0��¼ʧ��
	{
		cout << "�û������������"<<endl;
		logo();
	}
	return 0;
}
