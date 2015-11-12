#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> n(10, 2);

	int grade = 0;
	auto b = n.begin();
	auto e = n.end();

	for (auto it = n.begin(); it != n.end(); ++it) {
		(*it) *= (*it);
	}

	for (auto c : n) {
		cout << c << " ";
	}
	cout << endl;

	return 0;
}
