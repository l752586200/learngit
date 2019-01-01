#pragma once
#include<string>
using namespace std;
class Me
{
public:
	Me();
	void My_initialization();//初始化信息
	void My_note();//我的信息
	void Indent();//订酒店
	void My_discount();//我的折扣
	void My_message();//我的用户信息
	void My_sumindent();//我的订单总额
	void My_post();//我的帖子
	void My_indent();//我的订单
	void My_VIP();//我的会员
private:
	string myname;//用户名
	int mymessage;//我的未读消息
	string mysex;//用户性别
	string hotel_city;//酒店地点
	string my_mbp;//用户手机号
	string mycity;//用户所在城市
	int myage;//用户年龄
	string hotel_name;//订单酒店名称
	double hotel_money;//订单金额
	int MyVipLevel;//我的会员等级
	double myindent;//我的支付总额
	string mynote;//我的信息
};


