#pragma once
#include<string>
using namespace std;
class Me
{
public:
	Me();
	void My_initialization();//��ʼ����Ϣ
	void My_note();//�ҵ���Ϣ
	void Indent();//���Ƶ�
	void My_discount();//�ҵ��ۿ�
	void My_message();//�ҵ��û���Ϣ
	void My_sumindent();//�ҵĶ����ܶ�
	void My_post();//�ҵ�����
	void My_indent();//�ҵĶ���
	void My_VIP();//�ҵĻ�Ա
private:
	string myname;//�û���
	int mymessage;//�ҵ�δ����Ϣ
	string mysex;//�û��Ա�
	string hotel_city;//�Ƶ�ص�
	string my_mbp;//�û��ֻ���
	string mycity;//�û����ڳ���
	int myage;//�û�����
	string hotel_name;//�����Ƶ�����
	double hotel_money;//�������
	int MyVipLevel;//�ҵĻ�Ա�ȼ�
	double myindent;//�ҵ�֧���ܶ�
	string mynote;//�ҵ���Ϣ
};


