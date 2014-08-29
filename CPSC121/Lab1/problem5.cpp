//-----------------------------------------------------------------------
//				Name: Alex Masluk
//				Proj: Lab 1 Problem 5
//				Due: Sep 2, 2014
//				Class: CPSC 121
//				Prof: Mr. Ahmadnia
//				Description: Compute and display value of 2 formulas 
//-----------------------------------------------------------------------
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	//declarations
	float a, b;
	
	//user input
	cout << "\tEnter the value of a and b: ";
	cin >> a >> b;
	cout << endl;

	//display calculations
	cout << fixed << setprecision(2);
	cout << "\t(a+b)^a = " << pow(float(a+b), float(a)) << endl;
	cout << "\tThe 4th root of (a^2 + b^5) = " 
		  << pow((pow(float(a), float(2))+pow(float(b), float(5))), float(1./4)) <<endl;
	
	system("pause");
	return 0;
}
/*					Output				    *\
        Enter the value of a and b: 2.3 4.7

        (a+b)^a = 87.85
        The 4th root of (a^2 + b^5) = 6.92
Press any key to continue . . .
*/
