#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	const string s = "This library is inspired by Yawei Zhang's ZsummerX \
		[1] library, but this one is	\
a pure C version.Now it implement a IOCP(IO Completion Port) backend on	\
Windows, and a epoll backend on Linux.A select - based backend is planed.	\
[1]:	 https://github.com/zsummer/zsummerX   \
	It also have a buffer implement, mainly based the luaL_Buffer in Lua code.But	\
		the interface is targeted by send / recv method, so it's very useful to make	\
		znet send data continually and receive packets by packets.";


	
	int count_punctuation = 0;
	
	for (auto c : s) {
		if (ispunct(c)) {
			count_punctuation++;
		}

	}
	

	cout << "Number of punctuation is: "
		<< count_punctuation
		<< endl;

	return 0;
} 

