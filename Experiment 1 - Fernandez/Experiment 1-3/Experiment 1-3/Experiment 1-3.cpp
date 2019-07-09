#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double netBalance;
    double d1;
    double payment;
    double interest;
    double d2;
    double MInterest;
    double averageDailyBalance;

    cout << setprecision(3) << fixed << showpoint ;
    cout << "Net Balance: ";
    cin >> netBalance;
    cout << "Payment: ";
    cin >> payment;
    cout << "Days in billing cycle: ";
    cin >> d1;
    cout << "Days before billing cycle after payment is made: ";
    cin >> d2;
    cout  << "Monthly Interest: ";
    cin >> MInterest;

    averageDailyBalance = (netBalance * d1 - payment * d2)/d1;
    interest = averageDailyBalance * MInterest;

    cout <<endl<< "Interest is " << interest << endl;
    getch ();
    return 0;
}