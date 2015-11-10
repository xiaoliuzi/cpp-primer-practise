/*
 * 从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改写为大写形式。
 * 输出改变后的结果，每个词占一行。
 * 用vector<string>如何做呢,做完了，去睡觉
 * 注意string和vector<string>的区别，这里的vector的每一个下标，相当于一个
 * string对象
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	vector<string> text;
	vector<string>::size_type str_size;
	string word;
	string str_tmp;

	while (cin >> word) {
		text.push_back(word);
	}
	

//#if 0
	str_size = text.size();
	for (decltype (text.size()) index = 0; index != str_size; ++index) {
		str_tmp = text[index];
		for (auto &c : str_tmp)
		{
			c = toupper(c);
			//if (!isspace(c)) {
				cout << c;
			//}
			//else {
			//	cout << endl;
			//}
		}
		cout << endl;
	}

//#endif
	return 0;
} 

