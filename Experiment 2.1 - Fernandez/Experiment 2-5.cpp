#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int x1 = 0, x2 = 1, x3, x4 = 2, x5 = 2 + 20; 
    cout << "Fibonacci numbers:\n";
	cout << x1 << "," << x2 << ",";
	
    for (x4; x4 < x5; x4++) 
    
    	{
        	x3 = x1 + x2;
        	x1 = x2; 
        	x2 = x3; 
			cout << x3 << ",";
    	}
		
	cout << "\b "; \
	
	_getch();
	return 0;
}
