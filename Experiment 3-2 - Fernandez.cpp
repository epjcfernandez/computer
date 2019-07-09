#include <iostream>
#include <conio.h>
using namespace std;

const char province = 3;
const int week = 7;

int main()
{
    int temperature[province][week];

    cout << "Enter all temperature for a week of Province A, Province B and then Province C. \n";

    
    for (char n = 0; n < province; ++n)
    {
        for(int x = 0; x < week; ++x)
        {
            cout << "PROVINCE " << n + 1 << ", Day " << x + 1 << " : ";
            cin >> temperature[n][x];
        }
    }

    cout << "\n\nDisplaying Values:\n";

   
    for (char n = 0; n < province; ++n)
    {
        for(int x = 0; x < week; ++x)
        {
            cout << "PROVINCE " << n + 1 << ", Day " << x + 1 << " = " << temperature[n][x] << endl;
        }
    }


	 getch();
    return 0;
}