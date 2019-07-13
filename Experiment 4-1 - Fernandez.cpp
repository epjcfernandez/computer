#include <iostream>
#include <conio.h>
  
using namespace std;
void calculatormenu()	
{
	cout<<"MENU: "<<endl;
	cout<<"1. ADD"<<endl;
	cout<<"2. SUBTRACT"<<endl;
	cout<<"3. MULTIPLY"<<endl;
	cout<<"4. DIVIDE"<<endl;
	cout<<"5. MODULUS"<<endl;
}

int Add(int x, int y)	
{
	return(x + y); 
}
int Subtract(int x, int y)	
{
	return(x - y); 
}
int Multiply(int x, int y)	
{
	return(x * y); 
}
int Divide(int x, int y)	
{
	return(x / y); 
}
int Modulus(int x, int y)	
{
	return(x % y); 
}

int main()
{
	int operation, x, y; 
	char ans;
	bool coaster = false; 
		
	do {
		calculatormenu();
		cout << "Enter your choice: "; 	cin >> operation; 
		cout << "Enter your two numbers: ";		cin >> x >> y;	cout << endl; 

		switch(operation)	
		{ 
 			case 1:
				cout << "Result: " <<x+y; 
				break;
 		
			case 2: 
				cout << "Result: " << x-y; 
				break;
 		
			case 3:
				cout << "Result: " << x*y; 
				break;
 		
			case 4:
				cout << "Result: " << x/y; 
				break;
 
 			case 5:
				cout << "Result: " << x%y;
				break;
 
 			default:
				cout << "Invalid ";
				break;
    	}
	
		cout << "Continue? (Y or N) "<<endl;	cin >> ans;
	
		switch(ans)
		{ 
			case 'Y': 
 			case 'y': 
 				 cout << endl;
				break;
 
			default:
 				cout << "\nThank you!";
				coaster = true; 
				break;
		}
	}
	while (!coaster);

  	getch();
	return 0;
}
