#include "Header.h"
#include <iostream>

using namespace std;

namespace staticfunc
{
	void staticfunc(int n)
	{
		static int x = 0;
		cout << x + n << endl;
		x = n;
	}


}