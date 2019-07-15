#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
void factorization(int b, int c, int& u, int& v, bool& factorable)
{
double discriminant;
int root;
factorable = true;

discriminant = b * b - 4 * c;
// this executes the process of discriminant based on the values entered by user

if (discriminant < 0) // determines if the discriminant entered is less than 0

factorable = false;

else
{
root = static_cast<int>(sqrt(discriminant)); // this gets the square root of the discriminant processed

if (root * root != discriminant)

factorable = false;
else
{
if (((-b + root) % 2 != 0) && ((-b - root) % 2 != 0)) // determines if value is not factorable by 2

factorable = false;

else
{
u = (-b + root) / 2; // the equation to produce the value of u

v = (-b - root) / 2; // the equation to produce the value of v
			}
		}
	}
}
int main() //main function
{
int coefficient, constant,u,v; // this pertains to values entered by the user, to be thrown in the function to be processed
bool factorable; //this would determine if the values entered by the user is factorable
cout << "Enter the coefficient of x:\n ";
cin >> coefficient; // user enters the coefficient of x, which is the second term of the equation
cout << endl;
cout << "Enter the constant term:\n ";
cin >> constant; // this is the constant term, which is the third part of the equation
cout << endl;
factorization(coefficient, constant, u, v,
factorable); // calls out the void function to execute factorization
if (factorable)
{
cout << "x^2";
if (coefficient > 0) // describes that the value entered is positive

	cout << " + " << coefficient << "x";

else if (coefficient < 0) // describes that the coefficient entered is negative
cout << " - " << abs(coefficient) << "x"; // adds the negative sign to the value entered

if (constant > 0) //describes that the constant is positive
cout << " + " << constant;

else if (constant < 0) // describes that the constant is negative
cout << " - " << abs(constant)<<"\n";
cout << " when factored becomes:\n\n (x";
//this part prints out the factored version of the equation
if (u > 0) 
cout << " - " << u << ")(x"; // describes that the factored value of the second term is negative

else if (u < 0)
cout << " + " << abs(u) << ")(x"; // describes that the factored value of the second term is positive

if (v > 0)
cout << " - " << v << ")" << endl; // describes that the constant term has produced a negative value

else if (v < 0)
cout << " + " << abs(v) << ")" << endl; // describes that the constant term has produced a positive value

}

else
cout << "These cannot be factorable." << endl;
getch ();
return 0;
}
