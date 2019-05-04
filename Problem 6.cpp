#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	int n, count, a = 0, b = 1, c = 0;
	for (count = 1; count <= 20; count++)
	{
		c = a + b;
		a = b;
		b = c;
		if (n == 1)
	{
		cout << "," << a;
		continue;
	}
		if (n == 2)
	{
		cout << b << ",";
		continue;
	}
		cout << c << ",";
	}
	
	_getch();
	return 0;

}
