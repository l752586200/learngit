
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
		cout << "             ---***酒店推荐页面***----" << endl;
		cout << "      ***  请选择你想了解的酒店并输入数字   ***    " << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "            1.杨朔园林酒店" << endl;
		cout << "            2.设计师    " << endl;
		cout << "            3.青年酒店" << endl;
		cout << "            4.特色客栈" << endl;
		cout << "            5.海岛酒店" << endl;
		cout << "            请输入您想了解的序号" << endl;
		cin >> choose;
		if (choose <= 0 || choose > 5)
		{
			cout << "您的输入有误，请重新输入" << endl;
			goto r;
		}
		else
		{
			switch (choose)
			{
			case(1):
			{

				ifstream infile;
				infile.open("酒店信息.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "杨朔园林酒店")
					{
						cout << h.name << endl;
						cout << "评分:" << h.kobei << endl;
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
				infile.open("酒店信息.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "设计师酒店")
					{
						cout << h.name << endl;
						cout << "评分:" << h.kobei << endl;
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
				infile.open("酒店信息.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "青年酒店")
					{
						cout << h.name << endl;
						cout << "评分:" << h.kobei << endl;
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
				infile.open("酒店信息.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "特色客栈")
					{
						cout << h.name << endl;
						cout << "评分:" << h.kobei << endl;
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
				infile.open("酒店信息.txt");
				while (infile >> h.name >> h.kobei >> h.jiehsao >> h.piaowu)
				{
					if (h.name == "海岛酒店")
					{
						cout << h.name << endl;
						cout << "评分:" << h.kobei << endl;
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
	infile2.open("酒店信息.txt");
	while (infile2 >> h.name)
	{
		n = n + 1;
	}//此时n为txt的行数
	n = n / 4;//此时n为目的地的个数
	infile2.close();
	ifstream infile3;
	infile3.open("酒店信息.txt");
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
	cout << "以下是地点按评分降序排序后的结果" << endl;
	for (i = 0; i < n; i++)
		cout << i + 1 << " " << arr[i] << endl;
	cout << "请输入您想了解的序号" << endl;
	int t1;
	cin >> t1;
	if (t1 <= 0 || t1 > 5)
	{
		cout << "您的输入有误，请重新输入" << endl;
		goto s;
	}
	else
	{
		switch (t1)
		{
		case(1):

		{
			ifstream infile;
			infile.open("酒店信息.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[0])
				{
					cout << h.name << endl;
					cout << "评分:" << h.kobei << endl;
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
			infile.open("酒店信息.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[1])
				{
					cout << h.name << endl;
					cout << "评分:" << h.kobei << endl;
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
			infile.open("酒店信息.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[2])
				{
					cout << h.name << endl;
					cout << "评分:" << h.kobei << endl;
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
			infile.open("酒店信息.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[3])
				{
					cout << h.name << endl;
					cout << "评分:" << h.kobei << endl;
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
			infile.open("酒店信息.txt");
			while (infile >> h.jiehsao >> h.kobei >> h.name >> h.piaowu)
			{
				if (h.kobei == arr[4])
				{
					cout << h.name << endl;
					cout << "评分:" << h.kobei << endl;
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

