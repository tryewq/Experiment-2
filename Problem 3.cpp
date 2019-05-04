#include <iostream> 
#include <iomanip>
#include <cmath> 
#include <conio.h>
using namespace std;

int main ()
{
	
	float v, x, y, z;
	cout << "What is X? ";
	cin >> x;
	
	cout << "What is Y? ";
	cin >> y;

	z = 2.5;
	{
	
	if (x == 1 && 1 < y && y < 5)
	{
	v = x * y * z;
	cout << "V =" << setw(10) << setprecision(2) << v;
	}

	else if (x == 1 && y >= 5) 
			{
			v = (x + (y / z));
			cout << "V =" << setw(10) << setprecision(2) << v;
			}
		
	else if (x == 2 && y <= 5)
			{
			v = ((x - y) / z);
			cout << "V =" << setw(10) << setprecision(2) << v;
			}
		
	else if (x == 2 && y > 5)
			{
			v = x - (sqrt(y + z));
			cout << "V =" << setw(10) << setprecision(2) << v;
			}
	else 
			{
			v = x + y + z;
			cout << "V = " << setw(10) << setprecision(2) << v;
			}
	
	}
	_getch();
	return 0;

}


