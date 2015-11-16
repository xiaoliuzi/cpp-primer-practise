#include <iostream>
#include <string>
#include <vector>
#include "Screen.h"
#include <list>

using namespace std;


 
int main()
{
	list<string> a = { "Milton", "Shakespeare", "Austen"};
	auto it1 = a.begin();  // list<string>::iterator
	auto it2 = a.rbegin(); // list<string>::reverse_iterator
	auto it3 = a.cbegin(); // list<string>::const_iterator
	auto it4 = a.crbegin();// list<string>::const_reverse_iterator

	//显示指定类型
	list<string>::iterator it5 = a.begin();
	list<string>::const_iterator it6 = a.begin();
	// 是iterator还是const_iterator依赖于a的类型
	auto it7 = a.begin();  // 仅当a是const时，it7是const_iterator
	auto it8 = a.cbegin(); // it8是const_iterator

	// 当不需要写访问时，应使用cbegin和cend.


	return 0;
}

