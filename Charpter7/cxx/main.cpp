/* page 2 ������� 
 * ���ǵ���걣���������ۼ�¼�ĵ�����ÿ����¼������ĳ�����һ�����۵���Ϣ��һ����߶�ᣩ
 * ÿ����¼�������������
 * 0-201-7-353-x   4   24.99
 * ��һ��������ISBN�ţ��ڶ������۳��Ĳ��������һ������ĵ���
 * ��ʱ������ϰ���Ҫ��ѯ�ε���������ÿ����������������۶��ƽ���ۼۡ�
 */

/*
 * ��cin����һ��ʲ������Ǵ���һ��vector����Ȼ���跨�����дʶ���дΪ��д��ʽ��
 * ����ı��Ľ����ÿ����ռһ�С�
 * ��vector<string>�������,�����ˣ�ȥ˯��
 */
 //���ֲ���
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