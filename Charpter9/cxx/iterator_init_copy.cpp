#include <iostream>
#include <string>
#include <vector>
#include "Screen.h"
#include <list>
#include <deque>
#include <forward_list>

using namespace std;


 
int main()
{
	// 将一个新容器创建为另一个容器的拷贝方法有两种：
	// 1.可以直接拷贝整个容器；
	// 2.（array除外）拷贝由一个迭代器对指定的元素范围

	// 每个容器有三个元素，用给定的初始化器进行初始化

	list<string> authors = { "Milton", "Shakespeare", "Austen" };
	vector<const char*> articles = { "a", "an", "the" };

	list<string> list2(authors);
	//deque<string> authList(authors);//错误：容器类型不匹配
	//vector<string> words(articles);//错误：容器类型必须匹配


	// 正确：可以将const char*元素转换为string
	forward_list<string> words(articles.begin(), articles.end());


	return 0;
}
