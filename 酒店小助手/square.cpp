#include "stdafx.h"
#include<fstream>
#include "square.h"
#include<iostream>


square::square()
{
}
void square::Operator()
{
	cout << "*****����������Կ����û��ǵĶ�̬*****" << endl;
	cout << "**************************************" << endl;
	post p;
	cout << "������1���鿴��̬" << endl;
	int judge;
	cin >> judge;
	if (judge == 1)
	{
		p.show_post();
	}
}
square::~square()
{
}
void post::Hot()
{
	if (n_praise > 10 || n_discuss > 10)
	{
		cout << "����" << endl;
		ofstream outfile("����.txt");
		if (!outfile)
		{
			cerr << "error" << endl;
			exit(1);
		}
		else
		{
			outfile << Post << endl;
		}
		outfile.close();
	}
}
post::post()
{
	n_praise = 0;
	Post = " ";
	n_discuss = 0;
}
void post::write_post()
{
	struct POst
	{
		string Post;
		int n_praise;
		int n_discuss;
	};
	POst p;
	cin >> Post;
	ofstream outfile;
	outfile.open("dongtai.txt", ios::app);
	if (!outfile)
	{
		cerr << "error" << endl;
		exit(1);
	}
	else
	{
		outfile << Post << endl;
		outfile << "������:" << n_praise << endl;
		outfile << "������:" << n_discuss << endl;
	}
	outfile.close();
	ifstream infile;
	infile.open("dongtai.txt");
	while (infile >> p.Post >> p.n_praise >> p.n_discuss)
	{
		if (p.n_praise > 10 || p.n_discuss > 10)
		{
			ofstream outfile;
			if (!outfile)
			{
				cerr << "error!" << endl;
				exit(1);
			}
			outfile.open("remen.txt");
			outfile << Post;
			outfile.close();
		}
	}
	infile.close();
}
void post::show_post()
{
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
		cout << "����(1)" << n_praise << endl;
		cout << "����(2)" << n_discuss << endl;
		int judge = 0;
		cin >> judge;
		if (judge == 1)
		{
			n_praise = n_praise + 1;
			cout << "���ѳɹ�����" << endl;
		}
		if (judge == 2)
		{
			cin >> Discuss;
			n_discuss = n_discuss + 1;
			cout << "���ѳɹ�����" << endl;
		}
	}
	infile.close();
	s.Operator();
}
void post::praise()
{
	n_praise = n_praise + 1;
	cout << "���ѳɹ�����" << endl;
}
void post::discuss()
{
	n_discuss = n_discuss + 1;
	cout << "���ѳɹ�����" << endl;
}
void post::show_hot()
{
	char ch;
	ifstream infile;
	infile.open("remen.txt");
	while (!infile.eof())
	{
		infile.get(ch);
		cout << ch;
		cout << "����(1)" << n_praise << endl;
		cout << "����(2)" << n_discuss << endl;
		int judge = 0;
		cin >> judge;
		if (judge == 1)
		{
			n_praise = n_praise + 1;
			cout << "���ѳɹ�����" << endl;
		}
		if (judge == 2)
		{
			cin >> Discuss;
			n_discuss = n_discuss + 1;
			cout << "���ѳɹ�����" << endl;
		}
	}
	infile.close();
	s.Operator();
}