#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> scores(11, 0);

	int grade = 0;
	auto b = scores.begin();
	auto e = scores.end();

	while (cin >> grade) {
		if (grade <= 100) {
			++( *(b + grade / 10) );
		}
			//++scores[grade / 10];
			
	}

	for (auto c : scores) {
		cout << c << " ";
	}
	cout << endl;

	return 0;
}