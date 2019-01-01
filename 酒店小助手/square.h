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
	void write_post();//写帖子
	void show_post();//显示帖子
	void show_hot();//显示热门帖子
	void praise();//点赞
	void Hot();//热门贴子
	void discuss();//评论
private:
	string Post;//帖子
	int Discuss;//讨论
	int n_praise;//点赞数					[
	int n_discuss;//评论数
	square s;
	friend class square;
	friend class me;
};




