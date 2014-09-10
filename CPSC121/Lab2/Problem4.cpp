//-----------------------------------------------------------------------
//	Name: Alex Masluk
//	Proj: Lab 2 Problem 4
//	Due: Sep 2, 2014
//	Class: CPSC 121
//	Prof: Mr. Ahmadnia
//	Description: Convert date from digits to string
//-----------------------------------------------------------------------

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	//"timestamp
	time_t p;
	time(&p);
	cout << "Today's date and time is: " << ctime(&p) << endl << endl;

	//get input	
	int day, month, year;
	char c;	
	cout << "Enter today's date: ";
	cin >> month >> c >> day >> c >> year;


	//calculate day suffix;
	int lastDigit = day%10;
	string daySuffix;

	if (day==11)
		daySuffix = "th";
	else
		switch (lastDigit)
		{
			case 1:
				daySuffix = "st";
				break;
			case 2:
				daySuffix = "nd";
				break;
			case 3:
				daySuffix = "rd";
				break;
			default:
				daySuffix = "th";
		}	

	//get month text
	string monthText;
	switch (month)
	{
		case 1:
			monthText = "Jan";
			break;
		case 2:
			monthText = "Feb";
			break;
		case 3: 
			monthText = "Mar";
			break;
		case 4:
			monthText = "Apr";
			break;
		case 5: 
			monthText = "May";
			break;
		case 6:
			monthText = "June";
			break;
		case 7:
			monthText = "July";
			break;
		case 8: 
			monthText = "Aug";
			break;
		case 9:
			monthText = "Sept";
			break;
		case 10:
			monthText = "Oct";
			break;
		case 11:
			monthText = "Nov";
			break;
		case 12:
			monthText = "Dec";
			break;
	}

	//display date:
	cout << "\tToday is " << monthText << " " 
		            << day << daySuffix << ", "
			    << year << endl;

	
	system("pause");
	return 0;
}
/*--------------------------OUTPUT---------------------------
Today's date and time is: Tue Sep 09 17:50:44 2014


Enter today's date: 9/10/2014
        Today is Sept 10th, 2014
Press any key to continue . . .
------------------------------------------------------------*/


