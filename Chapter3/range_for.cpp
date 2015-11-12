#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s("Hello, World!!!");

	// 处理每个字符，声明c为引用类型，转换成大写形式
	for (auto &c : s)
		c = toupper(c);
	cout << s << endl;


	
	return 0;
} 
