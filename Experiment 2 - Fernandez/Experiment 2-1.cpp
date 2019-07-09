
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
char package;

int hours;


cout << "Enter the package purchased: ";
cin >> package;

while(package != 'A' && package!='a' && package!='B' && package!='b'&&
package!='C' && package!='c')
{cout <<"Enter the package purchased: ";
cin >> package;}

cout <<"\nEnter the number of hours used: ";
cin >>hours;


if(package == 'A' || package == 'a')
{if (hours <= 10)
cout<<"\nYour monthly fee is: Php 995";
else cout<<"\nYour monthly fee is: Php"<<995+(hours-10)*2;}

if(package == 'B' || package == 'b')
{if (hours <= 20)
cout<<"\nYour monthly fee is: Php 1495";
else cout<<"\nYour monthly fee is: Php"<<1495 + hours - 20;}

if(package == 'C' || package == 'c')
cout<<"\nYour monthly fee is: Php 1995";

getch();
return 0;
}