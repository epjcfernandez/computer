#include <iostream>
#include <conio.h>

using namespace std;

int main()

{	
	int gallons;
	float month, cost;
	const float demandcharge = 35, concharge = 1.10; 

	cout << "Enter unpaid amount from the past month: ";	cin >> month; 
	cout << "Enter gallons consumed in the current month: ";	cin >>	gallons;
		
	
	 if (month > 0) 
		{
			cost = demandcharge + (concharge * gallons) + month + 20;
			cout << "\nYour water bill costs: Php" << cost << endl;
		}

	else // Total water bill without late charge
		{
			cost = demandcharge + (concharge * gallons);
			cout << "\nYour water bill costs: Php" << cost << endl;
		}

	_getch();
	return 0;
}