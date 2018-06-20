#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

	//Author: James Saylor
	//Description : This program asks for height and radius for a cone. It then
	//				calculates slant height, surface area and volume and displays
	//				the results to the user

	//constants
	const double PI = 3.14159;
	
	//functions
	void CalculationResults(double var1, double var2, double var3)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Cone Slant Height is" << setw(10) << var1 << " inches" << endl;
		cout << "Cone Surface Area is" << setw(10) << var2 << " square inches" << endl;
		cout << "Cone Volume is" << setw(16) << var3 << " cubic inches" << endl;
	}

int main ()
{
	//variables
	double radius;
	double height;
	double radius2;
	double height2;
	double slantHeight;
	double surfaceArea;
	double volume;
	
	//program description
	cout << "Program for the Right Circular Cone calculations" << endl << endl;
	
	//input
	cout << "Enter cone radius (in inches): ";
	cin >> radius;
	cout << "Enter cone height (in inches): ";
	cin >> height;
	
	//calculations
	radius2 = pow(radius, 2.0);
	height2 = pow(height, 2.0);
	slantHeight = sqrt(radius2 + height2);
	surfaceArea = ((PI * radius2) + (PI * radius2 * slantHeight));
	volume = ((PI * radius2 * height) / 3);
	
	//output
	cout << fixed << showpoint << setprecision(2);
	cout << endl << endl << "RESULTS:" << endl; 
	cout << "For a Right Circular Cone with" << endl;
	cout << setw(13) << "Radius of" << setw(17) << radius << " inches" << endl;
	cout << setw(13) << "Height of" << setw(17) << height << " inches" << endl;
  	cout << endl << endl;
	CalculationResults(slantHeight, surfaceArea, volume);
	
	
 	cout << endl << endl;
 	return 0;
}

