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
		cout << "   ---***目的地推荐页面***----" << endl;
		cout << "      ***  请选择菜单   ***    " << endl;
		cout << "-----------------------------------" << endl;
		cout << "         1.博物馆" << endl;
		cout << "         2.捧河湾风景区     " << endl;
		cout << "         3.桃源仙谷风景区" << endl;
		cout << "         4.黑龙潭风景区" << endl;
		cout << "         5.京都第一瀑风景区" << endl;
		cout << "请输入您想了解的序号" << endl;
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
				infile.open("目的地信息.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "博物馆")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "评价:" << d.evaluation << endl;
					}
				}
				infile.close();
				break;
			}
			case(2):
			{
				ifstream infile;
				infile.open("目的地信息.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "捧河湾风景区")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "评价:" << d.evaluation << endl;
					}
				}
				infile.close();
				break;

			}
			case(3):
			{
				ifstream infile;
				infile.open("目的地信息.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "桃源仙谷风景区")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "评价:" << d.evaluation << endl;
					}
				}
				infile.close();
				break;

			}
			case(4):
			{
				ifstream infile;
				infile.open("目的地信息.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "黑龙潭风景区")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "评价:" << d.evaluation << endl;
					}
				}
				infile.close();
				break;

			}
			case(5):
			{
				ifstream infile;
				infile.open("目的地信息.txt");
				while (infile >> d.name >> d.description >> d.price >> d.evaluation)
				{
					if (d.name == "京都第一瀑风景区")
					{
						cout << d.name << endl;
						cout << d.description << endl;
						cout << d.price << endl;
						cout << "评价:" << d.evaluation << endl;
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
	infile2.open("目的地信息.txt");
	while (infile2 >> d.name)
	{
		n = n + 1;
	}//此时n为txt的行数
	n = n / 4;//此时n为目的地的个数
	infile2.close();
	ifstream infile3;
	infile3.open("目的地信息.txt");
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
s:	cout << "以下是地点按评分降序排序后的结果" << endl;
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
			infile.open("目的地信息.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[0])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "评价:" << d.evaluation << endl;
				}
			}
			infile.close();
			break;
		}
		case(2):
		{
			ifstream infile;
			infile.open("目的地信息.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[1])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "评价:" << d.evaluation << endl;
				}
			}
			infile.close();
			break;

		}
		case(3):
		{
			ifstream infile;
			infile.open("目的地信息.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[2])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "评价:" << d.evaluation << endl;
				}
			}
			infile.close();
			break;

		}
		case(4):
		{
			ifstream infile;
			infile.open("目的地信息.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[3])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "评价:" << d.evaluation << endl;
				}
			}
			infile.close();
			break;

		}
		case(5):
		{
			ifstream infile;
			infile.open("目的地信息.txt");
			while (infile >> d.name >> d.description >> d.price >> d.evaluation)
			{
				if (d.evaluation == arr[4])
				{
					cout << d.name << endl;
					cout << d.description << endl;
					cout << d.price << endl;
					cout << "评价:" << d.evaluation << endl;
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