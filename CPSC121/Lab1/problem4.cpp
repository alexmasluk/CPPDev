//-----------------------------------------------------------------------
//	Name: Alex Masluk
//	Proj: Lab 1 Problem 4
//	Due: Sep 2, 2014
//	Class: CPSC 121
//	Prof: Mr. Ahmadnia
//	Description: Calculate triangle area and perimeter 
//-----------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	float sideA, sideB, sideC;
	
	//get user input
	cout << "Enter the measure for all three sides of a triangle: ";
	cin >> sideA >> sideB >> sideC;

	//display triangle
	cout << fixed << showpoint << setprecision(2);
	cout << "For the following triangle\n";
	cout <<           "\t            /\\\n";
	cout <<           "\t           /  \\\n";
	cout << "\t a=" << sideA << "  /    \\  b=" << sideB << "\n";
	cout <<           "\t         /      \\\n";
	cout <<           "\t         --------\n";
	cout <<           "\t         c=" << sideC << "\n";
	
	//calculate and display area, perimeter
   float p = (sideA+sideB+sideC)/2;
	float area = sqrt(p*(p-sideA)*(p-sideB)*(p-sideC));
	float perimeter = sideA+sideB+sideC;
	cout << "\tArea = " << area << "\n";
	cout << "\tPerimeter = " << perimeter << "\n";


	system("pause");
	return 0;
	            
}

/*------------------------------Output-----------------------------------
Enter the measure for all three sides of a triangle: 33.185 21.234 13.80
For the following triangle
                    /\
                   /  \
         a=33.19  /    \  b=21.23
                 /      \
                 --------
                 c=13.80
        Area = 90.81
        Perimeter = 68.22
Press any key to continue . . .
------------------------------------------------------------------------*/

