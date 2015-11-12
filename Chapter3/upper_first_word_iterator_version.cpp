#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	string s("Some string");
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
		*it = toupper(*it);
	}
	cout << s << endl;
	return 0;
} 
