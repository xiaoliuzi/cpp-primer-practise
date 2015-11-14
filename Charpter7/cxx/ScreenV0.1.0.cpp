#include <iostream>
#include <string>
#include <vector>
#include "ScreenV0.1.0.h"


using namespace std;


 
int main()
{
	Screen myscreen(5,3,'*');
	const Screen blank(5, 3, '*');
	myscreen.set('#').display(cout);
	blank.display(cout);

	char ch = myscreen.get();
	//ch = myscreen.get(0, 0);

	//myscreen.move(4, 0).set('#');
	//myscreen.set('#');

	//Screen temp= myscreen.move(4, 0);
	//temp.set('#');



	return 0;
}
