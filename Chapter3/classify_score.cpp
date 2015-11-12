#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> scores( 11, 0 );

	int grade = 0;
	while (cin >> grade) {
		if (grade <=100 )
			++scores[grade / 10];
	}
	
	for (auto c : scores) {
		cout << c << " ";
	}
	cout << endl;

	return 0;
} 
