#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	//all needed for input and they are variables
	char choice, twice; //char choice is for geometric, char twice for asking to quit the calculator "yes or yes <3"	
	float s, r, h, l, w; 
	double pie = 3.14285714286; //needed for the formulas

	do
	{
		cout << " " << endl;
		//inputting choice 
		cout << "Choose which  what kind of geomteric figure to calculate: " << endl; 
		cout << "Enter C for cone" << endl;
		cout << "Enter P for pyramid" << endl;
		cout << "Enter S for sphere" << endl;
		cout << " " << endl;
		cout << "Enter the desired command: "; cin >> choice; 

		if (choice == 's' || choice == 'S' || choice == 'c' || choice == 'C' || choice == 'p' || choice == 'P') //to make sure whether uppercase or lowercase are considered 
		{
			switch(choice) //needed for chosen command 
			{
				case 'c':
				case 'C':
					{
					//inputting	
					cout << "Please input desired radius of the cone: "; cin >> r;
					cout << "Please input desired height of the cone: "; cin >> h;
					cout << " " << endl;
					
					//formulas for cone 
					double volumeCone = pie *(r*r)* h / 3;
					double lateralareaCone = pie * r * h;
					double baseareaCone = pie * (r*r);
					
					//outputs
					cout << "The Volume of the cone is: ";
					cout << volumeCone << endl;
					
					cout << "The Lateral Area of the cone is: ";
					cout << lateralareaCone << endl; 
					
					cout << "The Base Area of the cone is: ";
					cout << baseareaCone << endl;
					
					cout << "The Surface Area of the cone is: ";
					cout << lateralareaCone + baseareaCone << endl;

					cout << " " << endl;
					cout << "Do you want to quit geometric calculator?" << "\n Enter Y for yes \nEnter N for no" << endl; //asking the user to repeat the whole process or not
					cin >> twice;
					}
					break;
					
					

				case 'p':
				case 'P':
					{
					//inputting		
					cout << "Please input the length of the pyramid: "; cin >> l;
					cout << "Please input the width of the pyramid: "; cin >> w;
					cout << "Please input the height of the pyramid: "; cin >> h;
					cout << " " << endl;
					
					//formulas for pyramid 
					double volumePyramid = (l*w*h) / 3;
					double perimeterPyramid = (2*l)+(2*w);
					double lateralareaPyramid = perimeterPyramid * h / 2;
					double baseareaPyramid = l*w;
					double surfaceareaPyramid = lateralareaPyramid + baseareaPyramid;
					
					//outputs
					cout << "The Volume of the Pyramid is: ";
					cout << volumePyramid << endl;
					
					cout << "The Lateral Area of a Pyramid is: ";
					cout << lateralareaPyramid << endl;
					
					cout << "The Base Area of the Pyramid is: ";
					cout << baseareaPyramid << endl;
					
					cout << "The Surface Area of the Pyramid is: ";
					cout << surfaceareaPyramid << endl;
					
					cout << " " << endl;
					cout << "Do you want to quit geometric calculator?" << "\n Enter Y for yes \nEnter N for no" << endl; //asking the user to repeat the whole process or not
					cin >> twice;
					}
					break;


				case 's':
				case 'S':
					{
					//inputting	
					cout << "Input the Radius of the Sphere: "; cin >> r;
					cout << " " << endl;
					
					//formulas for pyramid 
					double volumeSphere = 4 * pie * (r*r*r) / 3;
					double surfaceareaSphere = 4 * pie * (r*r);
					
					//outputs
					cout << "The Volume of the Sphere is: ";
					cout << volumeSphere << endl;
					
					cout << "The Surface Area of the Sphere is: ";
					cout << surfaceareaSphere << endl;
					
					cout << " " << endl;
					cout << "Do you want to quit geometric calculator?" << "Enter Y for yes \nEnter N for no" << endl << endl; //asking the user to repeat the whole process or not
					cin >> twice;
					}
					break;

			}
		}

		else
		{
			cout << "Invalid character input. Please try again." << endl; //if user used another letter or used a number in choosing geometric shape
			return 0;
		}

	}
	while (twice == 'n' || twice == 'N'); //this is needed to repeat the whole process or a loop , uppercase or lowercase are considered 

	if (twice == 'y' || twice == 'Y') //this is needed to end the calculator , uppercase or lowercase are considered 
	{
		cout << "Thank you for using geometric figure calculator!!!" << endl; //end of calculator
		system ("pause");
		return 0;
	}
	else
	{
		cout << "Invalid character input. Termination of program is initiated." << endl; //if user used another letter or used a number in deciding
	}
	
system ("pause");
return 0;
}
