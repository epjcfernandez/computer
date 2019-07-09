#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int n;
	
	cout << "Counting..." << endl;	

	for (n = 1; n < 10; n++)
	
		{
			cout << n << ",";
		}
	
	for (n = 10; n >= 10, n <= 30; n+=2) 
	
		{
			cout << n << ",";
		}
		
	cout << "\b "; 
	
	_getch();
	return 0;
}