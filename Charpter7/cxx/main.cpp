/* page 2 书店问题 
 * 我们的书店保存所有销售记录的档案，每条记录保存了某本书的一次销售的信息（一册或者多册）
 * 每条记录包含三个数据项：
 * 0-201-7-353-x   4   24.99
 * 第一项是数的ISBN号，第二项是售出的册数，最后一项是书的单价
 * 有时，书店老板需要查询次档案，计算每本书的销售量、销售额、及平均售价。
 */

/*
 * 从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改写为大写形式。
 * 输出改变后的结果，每个词占一行。
 * 用vector<string>如何做呢,做完了，去睡觉
 */
 //二分查找
#include <iostream>
#include <string>
#include <vector>
#include "Screen.h"


using namespace std;


 
int main()
{
	Screen myscreen;
	char ch = myscreen.get();
	//ch = myscreen.get(0, 0);

	//myscreen.move(4, 0).set('#');
	myscreen.move(4, 0);
	myscreen.set('#');


	return 0;
}

#if 0

int main()
{
	Sales_item total;
	int ival;
	int &rval = 1;

	if (cin >> total)
		Sales_item trans;
	while (cin >> trans) {
		if (total.isbn() == trans.isbn())
			total += trans;
		else {
			cout << total << endl;
			total = trans;
		}

		cout << total endl;
	}
	else {
		cerr << "No data?" << endl;
		return -1;
	}

	return 0;
}

#endif