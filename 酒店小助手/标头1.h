#pragma once
#include<iostream>
#include<math.h>
#include<string>
#include<fstream>
using namespace std;
typedef struct sum
{
	char province[20];
	char number[20];
	char name[30];
	char position[100];
	char price[20];
}SUM;
SUM s[30] = { { "北京","(1)","北京京都信宛酒店","海淀区 什坊院6号莲花桥畔 ，近地铁10号线莲花桥站B出口","678元起" },
{ "北京","(2)","北京外国专家大厦","朝阳区 北四环中路华严北里8号 ，健翔桥辅路东南侧","788元起" },
{ "北京","(3)","北京和平里宾馆","东城区 兴化路化工大院4号楼 ，近地坛公园北门、国展中心区","398元起" },
{ "北京","(4)","北京国贸劲松店","朝阳区 农光东里11号楼 ，近武圣路东侧、地铁14号线平乐园站D口","464元起" },
{ "北京","(5)","北京丽港湾国际酒店","朝阳区 东四环十里堡北里28号 ，近朝阳北路农民日报社往南","1188元起" },
{ "上海","(6)","上海安保大酒店","浦东新区 东方路800号 ，近崂山东路","548元起" },
{ "上海","(7)","上海Pagoda君亭设计酒店","杨浦区 政学路77号 ，近淞沪路、大学路","890元起" },
{ "上海","(8)","上海小南国花园酒店","杨浦区 佳木斯路777号 ，近营口路","800元起" },
{ "上海","(9)","上海同文君亭酒店","虹口区 四川北路1755号 ，近海伦西路","619元起" },
{ "上海","(10)","上海和颐至尊酒店","黄浦区 浙江中路379号 ，近南京东路步行街","629元起" },
{ "广州","(11)","美豪丽致酒店","浦东新区 东方路800号 ，近崂山东路","658元起" },
{ "广州","(12)","柏高酒店","杨浦区 政学路77号 ，近淞沪路、大学路","368元起" },
{ "广州","(13)","广州天河亚朵酒店","杨浦区 佳木斯路777号 ，近营口路","542元起" },
{ "广州","(14)","碧桂园空港凤凰酒店","虹口区 四川北路1755号 ，近海伦西路","399元起" },
{ "广州","(15)","广州威珀斯酒店","黄浦区 浙江中路379号 ，近南京东路步行街","640元起" },
{ "成都","(16)","成都索菲斯锦苑宾馆","青羊区人民中路三段22号，近文殊坊","538元起" },
{ "成都","(17)","成都万达瑞华酒店","锦江区滨江中路9号，近盐道街","1220元起" },
{ "成都","(18)","成都瑞城名人酒店","青羊区人民中路二段68号，近远东百货","423元起" },
{ "成都","(19)","成都宽窄巷子美居酒店","青羊区 通惠门路3号，近宽窄巷子","519元起" },
{ "成都","(20)","成都新良大酒店","锦江区东大街上东大街段246号","389元起" },
{ "深圳","(21)","深圳南山GitiGo酒店","南山区海天一路软件园2栋A座，近净慧路口","569元起" },
{ "深圳","(22)","深圳滨河时代亚朵S酒店","福田区滨河大道9289号滨河时代大厦B座，与东通路交汇处","778元起" },
{ "深圳","(23)","桔子酒店","罗湖区深南东路2023号，地铁蛇口线","398元起" },
{ "深圳","(24)","美豪酒店","宝安区宝安大道5051号，近西乡凤凰国际影城","328元起" },
{ "深圳","(25)","美豪丽致酒店","福田区滨河大道5022号联合广场B座","640元起" },
{ "杭州","(26)","杭州马可波罗假日酒店","上城区平海路38号，近浣纱路口","669元起" },
{ "杭州","(27)","杭州中山国际大酒店","上城区平海路15号，近中山东路","359元起" },
{ "杭州","(28)","赞成宾馆","佑圣观路74号，西湖大道南，近河坊街,距地铁1号线步行8分钟","499元起" },
{ "杭州","(29)","杭州马可波罗滨海湖酒店","上城区浣纱路99号，与国货路交叉口处","600元起" },
{ "杭州","(30)","浙江酒店","下城区延安路447号，延安路与凤起路交叉口","588元起" } };
class Recommend
{
public:
	void f(int i)
	{
		cout << "所在城市：" << s[i].province << endl;
		cout << "编号：" << s[i].number << endl;
		cout << "酒店名称：" << s[i].name << endl;
		cout << "酒店位置：" << s[i].position << endl;
		cout << "价格区间" << s[i].price << endl;
	}
	void g(int i)
	{
		cout << "编号：" << s[i].number << endl;
		cout << "酒店名称：" << s[i].name << endl;
	}
	void set1();
	void set2();
	void set3();
	void set4();
	void hour1()
	{
		cin >> year1;
		cin >> month1;
		cin >> day1;
	}
	void hour2()
	{
		cin >> year2;
		cin >> month2;
		cin >> day2;
	}
protected:
	int city;
	int year1, year2;
	int month1, month2;
	int day1, day2;
	string type;
};
void Recommend::set1()
{
	cout << "入住城市:" << endl;
	cout << "热门推荐:" << endl;
	cout << "（1）北京" << endl;
	cout << "（2）上海" << endl;
	cout << "（3）广州" << endl;
	cout << "（4）成都" << endl;
	cout << "（5）深圳" << endl;
	cout << "（6）杭州" << endl;
	cout << "请按编号输入" << endl;
	cin >> city;
}
void Recommend::set2()
{
	if (city == 1)
	{
		int n;
		for (int i = 0; i<5; i++)
		{
			g(i);
		}
		cout << "请问您要选择的酒店编号为:" << endl;
		cin >> n;
		f(n - 1);
	}
	if (city == 2)
	{
		int n;
		for (int i = 5; i<10; i++)
		{
			g(i);
		}
		cout << "请问您要选择的酒店编号为:" << endl;
		cin >> n;
		f(n - 1);
	}
	if (city == 3)
	{
		int n;
		for (int i = 10; i<15; i++)
		{
			g(i);
		}
		cout << "请问您要选择的酒店编号为:" << endl;
		cin >> n;
		f(n - 1);
	}
	if (city == 4)
	{
		int n;
		for (int i = 15; i<20; i++)
		{
			g(i);
		}
		cout << "请问您要选择的酒店编号为:" << endl;
		cin >> n;
		f(n - 1);
	}
	if (city == 5)
	{
		int n;
		for (int i = 20; i<25; i++)
		{
			g(i);
		}
		cout << "请问您要选择的酒店编号为:" << endl;
		cin >> n;
		f(n - 1);
	}
	if (city == 6)
	{
		int n;
		for (int i = 25; i<30; i++)
		{
			g(i);
		}
		cout << "请问您要选择的酒店编号为:" << endl;
		cin >> n;
		f(n - 1);
	}
}
void Recommend::set3()
{
	cout << "请问您的入住时间为" << endl;
	hour1();
	cout << "请问您的退房时间为" << endl;
	hour2();
	int m;
	m = (year2 - year1) * 365 + (month2 - month1) * 30 + day2 - day1;
	cout << "（入住时长为" << m << "天)" << endl;
}
void Recommend::set4()
{
	cout << "搜索：" << endl;
	string m;
	int i;
	int n = 0;
	cin >> m;
	for (i = 0; i<30; i++)
	{
		if (m == s[i].name)
		{
			f(i);
			n++;
		}
		if (m == s[i].position)
		{
			f(i);
			n++;
		}
		if (m == s[i].province)
		{
			f(i);
			n++;
		}
		if (m == s[i].price)
		{
			f(i);
			n++;
		}
		if (m == s[i].number)
		{
			f(i);
			n++;
		}
	}
	if (n>0)
	{
		cout << "酒店内容如上！" << endl;
	}
	else if (n == 0)
	{
		cout << "未匹配到酒店信息！" << endl;
		set4();
	}
}