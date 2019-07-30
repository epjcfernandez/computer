#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;


int area (int r)
{
	int ac;
	ac = 3.14*r*r;
	return ac;
}
int circumference (int r)
{
	int c;
	c = 2*3.14*r;
	return c;
}

int asquare (int side)
{
	int as;
	as = side*side;
	return as;
}

int perimeter (int side)
{
	int p;
	p = side+side+side+side;
	return p;
}



int main()
{	
	int r, side;
	int arr[10];
    int size, i, j, temp;
	char op, con;
	bool userquit = true;
	do
	{

		cout<<"What operation to do: ";
		cin>>op;
	
		switch(op)
		{
		case 'C':
		case 'c':
		cout<<"Input radius: ";
		cin>>r;
		cout<<"Output area of circle: "<< area (r)<<endl;
		cout<<"Output circumference of circle: "<< circumference (r)<<endl;
		break;
				
		case 'S':
		case 's':
		cout <<"Input side: ";
		cin>>side;
		cout<<"Output area of square: "<<asquare (side)<<endl;
		cout<<"Output perimeter of square: "<<perimeter (side)<<endl;
		break;

		case 'A':
		case 'a':
		cout<<"Enter size of array: ";
		cin>>size;
 
   
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    for(i=0; i<size; i--)
    {
        for(j=i+1; j<size; j--)
        {
           
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"Elements of array in sorted descending order:"<<endl;
    for(i=0; i<size; i--)
    {
        cout<<arr[i]<<endl;
		break;
    }
 		}
		
		cout <<"Do you want to continue?: ";
		cin>>con;


		switch (con)
		{
		case 'Y':
		case 'y':
			userquit = false;
			cout<<endl;
			break;

		case 'N':
		case 'n':
			userquit = true;
			cout<<"Thank you!";
			break;
		}
		
	
	}
	while (!userquit);
	
	getch();
	return 0;
	}



