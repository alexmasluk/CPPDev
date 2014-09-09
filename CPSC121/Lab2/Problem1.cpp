//=========================================================================
// File: problem1.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/11/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 2, Problem No. 1
// Description: 
// 	Compute healthclub membership fee based upon age and gender.
//
//=========================================================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int CHILD = 1, TEEN = 2, ADULT = 3;
const int MENU_LEFT_WIDTH = 25, 
		    MENU_RIGHT_WIDTH = 6;
const float M_CHILD_FEE = 50.00,
				F_CHILD_FEE = 55.00,
				M_TEEN_FEE = 150.00,
				F_TEEN_FEE = 155.00,
				M_ADULT_FEE = 275.00,
				F_ADULT_FEE = 250.00;
const float TAX = 0.1;

//====== main =============================================================
//
//=========================================================================
int main()
{
	//timestamp
	time_t p;
	time(&p);
	cout << "Today's date and time is: " << ctime(&p) << endl << endl;

	//declarations;
	int age, ageGroup;
	char gender;
	string fullName;
	float memberFeeSubtotal, memberFeeTotal;
	
	//display menu
	cout << fixed << showpoint << setprecision(2);
	cout << setfill('.');
	cout << "----------Fullerton Health Club-----------\n";
	cout << "Children (Age 1-12)\n";
	cout << "\t";
	cout << left << setw(MENU_LEFT_WIDTH) << "Male"
		  << right << setw(MENU_RIGHT_WIDTH) << M_CHILD_FEE;
	cout << endl;
	cout << "\t";
	cout << left << setw(MENU_LEFT_WIDTH) << "Female"
		  << right << setw(MENU_RIGHT_WIDTH) << F_CHILD_FEE;
	cout << endl;
	cout << "Teenagers (Age 13-19)\n";
	cout << "\t";
	cout << left << setw(MENU_LEFT_WIDTH) << "Male"
		  << right << setw(MENU_RIGHT_WIDTH) << M_TEEN_FEE;
	cout << endl;
	cout << "\t";
	cout << left << setw(MENU_LEFT_WIDTH) << "Female"
		  << right << setw(MENU_RIGHT_WIDTH) << F_TEEN_FEE;
	cout << endl;
	cout << "Adults (Age > 19)\n";
	cout << "\t";
	cout << left << setw(MENU_LEFT_WIDTH) << "Male"
		  << right << setw(MENU_RIGHT_WIDTH) << M_ADULT_FEE;
	cout << endl;
	cout << "\t";
	cout << left << setw(MENU_LEFT_WIDTH) << "Female"
		  << right << setw(MENU_RIGHT_WIDTH) << F_ADULT_FEE;
	cout << endl;

	//get user input
	cout << "\t  Enter your age? ";
	cin >> age;
	cout << "\t  Enter your gender(m/f)? ";
	cin >> gender;
	cout << "\t  Enter your full name: ";
	cin.ignore();
	getline(cin, fullName);
	
	//calculate and display membership fee.
	if (age <= 12)
		ageGroup = CHILD;
	else if (age <= 19)
		ageGroup = TEEN;
	else
		ageGroup = ADULT;

	switch (ageGroup)
	{
		case CHILD:
			switch (gender)
			{
				case 'm': case 'M': memberFeeSubtotal = M_CHILD_FEE;
										  break;
				default				: memberFeeSubtotal = F_CHILD_FEE;
			}
			break;
		case TEEN:
			switch (gender)
			{
				case 'm': case 'M': memberFeeSubtotal = M_TEEN_FEE;
										  break;
				default				: memberFeeSubtotal = F_TEEN_FEE;
			}
			break;
		default:
			switch (gender)
			{
				case 'm': case 'M': memberFeeSubtotal = M_ADULT_FEE;
										  break;
				default				: memberFeeSubtotal = F_ADULT_FEE;
			}
	}
	
	memberFeeTotal = memberFeeSubtotal + memberFeeSubtotal*TAX;

	cout << "\t    Hello Mr. " << fullName 
		  << ", your membership fee is " << memberFeeTotal 
		  << " (10% tax is included)\n";


	system("pause");
	return 0;
}

/*=============================== OUTPUT ====================================
Today's date and time is: Fri Sep 05 15:24:55 2014

----------Fullerton Health Club-----------
Children (Age 1-12)
        Male......................50.00
        Female....................55.00
Teenagers (Age 13-19)
        Male.....................150.00
        Female...................155.00
Adults (Age > 19)
        Male.....................275.00
        Female...................250.00
          Enter your age? 48
          Enter your gender(m/f)? M
          Enter your full name: Barack H Obama
            Hello Mr. Barack H Obama, your membership fee is 302.50 (10% tax is included)
Press any key to continue . . .
============================================================================*/ 

