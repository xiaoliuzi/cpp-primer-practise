#include <iostream>
#include <string>
#include <vector>

using namespace std;
void print_info_vector_v14(vector<int> value, string vi)
{
	cout << "Size of " << vi << " is:"<< value.size() << endl;
	cout << "Element of " << vi << " is:";
	for (auto c : value) {
		cout << c << " ";
	}
	cout << endl;
}

void print_info_vector_v67(vector<string> value, string vi)
{
	cout << "Size of " << vi << " is:" << value.size() << endl;
	cout << "Element of " << vi << " is:";
	for (auto c : value) {
		cout << c << " ";
	}
	cout << endl;
}

int main()
{
	//确认默认初始化的值，是否是未定义的？温习默认初始化
	vector<int> v1;						//包含1个元素，元素的值未定义;//判断错误，应为0个元素，值为默认初始化
	vector<int> v2(10);					//包含1个元素，元素的值为10；//判断错误，应为10个元素，值全为0
	vector<int> v3(10, 42);				//包含10个元素，元素的值全为42
	vector<int> v4{ 10 };				//包含1个元素，元素的值为10
	vector<int> v5{ 10, 42 };			//包含2个元素，索引为0的元素v5[0]的值为10，v5[1]的值为42
	vector<string> v6{ 10 };			//v6有10个默认初始化的元素
	vector<string> v7{ 10, "hi" };		//v7有10个元素，初始化值都为hi
	
	print_info_vector_v14(v1, "v1");
	print_info_vector_v14(v2, "v2");
	print_info_vector_v14(v3, "v3");
	print_info_vector_v14(v4, "v4");
	print_info_vector_v14(v5, "v5");
	print_info_vector_v67(v6, "v6");
	print_info_vector_v67(v7, "v7");

	return 0;
} 
