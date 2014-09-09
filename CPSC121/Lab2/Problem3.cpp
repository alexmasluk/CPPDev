//=========================================================================
// File: problem3.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/11/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 2, Problem No. 3
// Description: 
// 	Display a menu, take user order, calculate and display bill.
//
//=========================================================================

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int LEFT_WIDTH = 20, RIGHT_WIDTH = 4;
const float SMALL_DRINK_PRICE = 1.20,
      	    MEDIUM_DRINK_PRICE = 1.50,
	    LARGE_DRINK_PRICE = 1.70,
	    SMALL_SANDWICH_PRICE = 3.75,
	    LARGE_SANDWICH_PRICE = 4.00; 
	   
//====== main =============================================================
//
//=========================================================================

int main()
{
	//timestamp
	time_t p;
	time(&p);
	cout << "Today's date and time is: " << ctime(&p) << endl << endl;

	//display menu
	cout << fixed << showpoint << setprecision(2);
	cout << "-----------------Menu------------------\n";
	cout << "Drinks\n";
	cout << setfill('.');
	cout << left << setw(LEFT_WIDTH);
	cout << "  Small";
	cout << right << setw(RIGHT_WIDTH);
	cout << SMALL_DRINK_PRICE;
	cout << endl;
	cout << left << setw(LEFT_WIDTH);
	cout << "  Medium";
	cout << right << setw(RIGHT_WIDTH);
	cout << MEDIUM_DRINK_PRICE; 
	cout << endl;	cout << left << setw(LEFT_WIDTH);
	cout << "  Large";
	cout << right << setw(RIGHT_WIDTH);
	cout << LARGE_DRINK_PRICE; 
	cout << endl;
	cout << "Sandwiches\n";
	cout << left << setw(LEFT_WIDTH);
	cout << "  10 inches";
	cout << right << setw(RIGHT_WIDTH);
	cout << SMALL_SANDWICH_PRICE;;
	cout << endl;	cout << left << setw(LEFT_WIDTH);
	cout << "  12 inches";
	cout << right << setw(RIGHT_WIDTH);
	cout << LARGE_SANDWICH_PRICE;
	cout << endl;

	//get user input
	int numDrinks, numSandwiches, sandwichSize;
	char drinkSize;
	float bill = 0;

	cout << "\tHow many drinks: ";
	cin >> numDrinks;
	cout << "\t  What size(S=Small, M=Medium, L=Large)? ";
	cin >> drinkSize;
	cout << "\tHow many sandwiches? "; 
	cin >> numSandwiches;
	cout << "\t  What size(12/10 inches)? ";
	cin >> sandwichSize;

	//calculate and display bill
	switch (drinkSize)
	{
		case 's': case 'S':
			bill += numDrinks*SMALL_DRINK_PRICE;
			break;
		case 'm': case 'M':
			bill += numDrinks*MEDIUM_DRINK_PRICE;
			break;
		default:	
			bill += numDrinks*LARGE_DRINK_PRICE;
	}

	bill += (sandwichSize==10)? numSandwiches*SMALL_SANDWICH_PRICE : 
				    numSandwiches*LARGE_SANDWICH_PRICE;

	cout << "\t\tTotal bill = " << bill << endl;

	system("pause");
	return 0;
}
/*=============================== OUTPUT ====================================
Today's date and time is: Tue Sep 09 17:35:34 2014


-----------------Menu------------------
Drinks
  Small.............1.20
  Medium............1.50
  Large.............1.70
Sandwiches
  10 inches.........3.75
  12 inches.........4.00
        How many drinks: 3
          What size(S=Small, M=Medium, L=Large)? M
        How many sandwiches? 3
          What size(12/10 inches)? 10
                Total bill = 15.75
Press any key to continue . . .
============================================================================*/
