#include <iostream>
#include <iomanip> 
#include <cmath> 
#include <conio.h>

using namespace std;

int main()

{
	int a, b;
	float v;
	const float c = 2.5; 

	cout << "Enter value for x: ";	cin >> a; 
	cout << "Enter value for y: ";	cin >> b; 
	
	switch (a) 
	{
		case 1: 
			if (1 < b < 5)
				{
					v = a * b * c; 
				}
			else if (b >= 5)
				{
					v = a + (b / c); 
				}
			break;
			
		case 2: 
			if (b <= 5)
				{
					v = fabs((a - b) / c); 
				}
			else if (b > 5)
				{
					v = a - (sqrt(b + c)); 
				}
			break;
			
		default:
			v = a + b + c; 
			break;
	}
	
	cout << "\nThe value for V is\n" << setw(10) << fixed << setprecision(2) << v;
	
	getch();
	return 0;
}