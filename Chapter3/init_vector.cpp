#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	vector<int> ivec1(10,42);

	vector<int> ivec2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };

	vector<int> ivec3;
	for (decltype(ivec3.size()) index = 0; index != 10; index++) {
		ivec3.push_back(42);
	}
	return 0;
} 
