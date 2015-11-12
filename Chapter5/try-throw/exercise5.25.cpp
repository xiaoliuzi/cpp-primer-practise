#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int n1, n2;
	while (cin >> n1 >> n2) {
		try {
			if (n2 == 0) {
				throw range_error("range error");
			}
			cout << n1 / n2 << endl;
		}
		catch (range_error err) {
			cout << err.what()
				<< "\nTry again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!c || c == 'n') {
				break;
			}
		}
	}


	return 0;
}