#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
char word[7]={'e','n','g','1','9','0','7'};
char temp[7];

for (int n = 7; n > -1; n--)
{
char temp = word[n];
word[n] = temp;
cout<<word[n];
}
cout<<endl;
getch ();
return 0;
}