#pragma once
#include<string>
using namespace std;
class square
{
public:
	square();
	void Operator();
	~square();
};
class post
{
public:
	post();
	void write_post();//д����
	void show_post();//��ʾ����
	void show_hot();//��ʾ��������
	void praise();//����
	void Hot();//��������
	void discuss();//����
private:
	string Post;//����
	int Discuss;//����
	int n_praise;//������					[
	int n_discuss;//������
	square s;
	friend class square;
	friend class me;
};




