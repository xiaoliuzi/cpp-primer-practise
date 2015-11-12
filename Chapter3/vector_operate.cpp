#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main()
{
	string word("some thing");
	int i = 0;
	vector<string> text;
	while ( cin >> word ) {
		text.push_back(word);
		cout << text[i] << endl;
		i++;
	}

	return 0;
} 
