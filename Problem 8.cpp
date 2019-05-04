#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x;
	
	cout << "Enter a number: ";
	cin >> x;
	
	cout << "Multiplication table of " << x << ":";
	
	for (int y=1; y<=10; ++y)
	cout << "\n" << y << " * " << x << " = " << y * x;
	
	_getch();
	return 0;
	
}
