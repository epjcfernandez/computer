//1
#include<iostream>
#include <conio.h>
using namespace std;
int main()
{

	int ticketPrice, a, b, c, d;
	cout << "Ticket price: "<<" No. of Tickets Sold"<<endl;
	
	cout <<"250\t\t";
	cin >> a;
	cout << "Total\t\t" <<250*a<<endl;

	cout <<"100\t\t";
	cin >> b;
	cout << "Total\t\t" <<100*b<<endl;

	cout <<"50\t\t";
	cin >> c;
	cout << "Total\t\t" <<50*c<<endl;

	cout <<"25\t\t";
	cin >> d;
	cout << "Total\t\t" <<25*d<<endl;

	cout <<"Total sales: "<<(250*a)+(100*b)+(50*c)+(25*d)<<endl;


	

	getch();
	return 0;
}
