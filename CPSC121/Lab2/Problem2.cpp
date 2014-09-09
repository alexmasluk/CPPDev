//=========================================================================
// File: problem2.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/11/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 2, Problem No. 2
// Description: 
// 	Display a menu, take user order, calculate and display bill
//
//=========================================================================

#include <iostream>
#include <iomanip>
using namespace std;

//====== main =============================================================
//
//=========================================================================
int main()
{
	//timestamp
	time_t p;
	time(&p);
	cout << "Today's date and time is: " << ctime(&p) << endl << endl;

	//declarations
	float numer1, numer2, denom1, denom2, numerResult, denomResult;
	char operation;

	//get user input
	cout << "Enter a fraction: ";
	cin >> numer1;
	cin.ignore();
	cin >> denom1;

	cout << "Enter another fraction: ";
	cin >> numer2;
	cin.ignore();
	cin >> denom2;

	cout << "\tEnter an operation symbol (+,-,*,/): "
	cin >> operation;

	//perform calculation
	switch (operation)
	{
		case '+':
			numerResult = numer1*denom2 + numer2 * denom1;
			denomResult = denom1*denom2;
			break;
		case '-':
			numerResult = numer1*denom2 - numer2 * denom1;
			denomResult = denom1*denom2;
			break;
		case '*':
			numerResult = numer1*numer2;
			denomResult = denom1*denom2;
			break;
		default;
			numerResult = numer1*denom2;
			denomResult = denom1*numer2;
	}

	//display result
	cout << fixed << showpoint << setprecision(2);
	cout << "\t\t(" << numer1 << "/" << denom1 << ")"
		  << " " << operation << " ";
		  <<  "(" << numer2 << "/" << denom2 << ")"
		  << " = "
		  << numerResult << "/" << denomResult << endl;

	system("pause");	
	return 0;

}

/*=============================== OUTPUT ====================================
Today's date and time is: Fri Sep 05 15:57:23 2014

Enter a fraction: 12/5
Enter another fraction: 2.1/7.5
        Enter an operation symbol (+,-,*,/): *
                (12.00/5.00) * (2.10/7.50) = 25.20/37.50
Press any key to continue . . .
============================================================================*/ 
