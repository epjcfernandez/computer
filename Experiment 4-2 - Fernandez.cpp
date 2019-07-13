#include <iostream>
#include <conio.h>

using namespace std;

void shownumbers(int *array, int size)	{	
	for(int n = 0; n < size; n++)	{
		cout << array[n] << " ";
	}
}

void sorting(int *array, int size)	{		
	int n, x, minimum, temp;
	
	for(n = 0; n < size - 1; n++)	{
		minimum = n;	
		
		for(x = n + 1; x < size; x++)	{
			if(array[x] < array[minimum])	{
				minimum = x;
			}
		}
		
		if (minimum != n)	{
			temp = array[n];
			array[n] = array[minimum];
			array[minimum] = temp;
		}
	}
}

int main()	
{
	int number;
	
	
 cout<< "Enter the array size: ";
	cin >> number;
	cout << endl;
   
	int arr[100];	// 
	
	cout << "Enter the " << number << " elements: " << endl;
	
	for(int n = 0; n < number; n++)	{	
    	cin >> arr[n];
	}
   
	cout << "Your data: "<<endl;
	shownumbers(arr, number);	
   
	sorting(arr, number);	
	
	cout <<endl;

	cout << "After sorting:" <<endl<< "Result: ";
	shownumbers(arr, number);	
	
	_getch();
	return 0;
}