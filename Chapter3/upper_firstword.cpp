#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s("some string");

	if (!s.empty())
	{
		for (decltype(s.size()) index = 0; index != s.size() && !( isspace(s[index]) ); ++index) {
			s[index] = toupper(s[index]);
		}

		cout << s << endl;
	}
		
	return 0;
} 
