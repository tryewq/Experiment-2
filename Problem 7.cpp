#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    
	int n, i, sum;
    bool abort = false;

	do
	{
		cout << "Enter a number: ";
    	cin >> n;	  
    	
 		if ((i=1) && (i<=n))
			cout << "The sum of all whole numbers from " << "1 to " << n << " " << "is = "<< (n*(n+1))/2 << endl;
		
		else
			cout << "Thank you! \n";
	} while (!abort);
    
	_getch();
    return 0;
    
}
