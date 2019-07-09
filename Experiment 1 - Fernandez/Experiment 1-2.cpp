 
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
 
 int main()
 {
     double m, d, v;
     cout <<setprecision(2)<<showpoint<<fixed;
     cout<<"Enter mass (in grams): ";
     cin>> m;
     cout<<"Enter density (in grams per cubic centimeters): ";
     cin>>d;
      
      v = (0.5*m)/d;
      
      cout <<"Volume: "<<v<<endl;
      
      getch();
      return 0;
      
 }
