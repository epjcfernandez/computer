#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	bool coaster = false; 
	
	do 
	{	
		int x1, x3 = 0; 
		cout << "Enter a number: ";	cin >> x1;
		
		if	(x1 > 0)
			{
				for (int x2 = 1; x2 <= x1; x2++) 
					{
        				x3 += x2; 
    				}
    		
    			cout << "The sum of all whole numbers from 1 to " << x1 << " is " << x3 << "." << endl;
    		}
			
		else 
    		{
    			cout << "Thank you!" << endl;
    			break;
			}
    	
	} while (!coaster); 
	
	getch();
	return 0;
}