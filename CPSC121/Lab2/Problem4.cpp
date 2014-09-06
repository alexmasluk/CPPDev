//-----------------------------------------------------------------------
//				Name: Alex Masluk
//				Proj: Lab 2 Problem 4
//				Due: Sep 2, 2014
//				Class: CPSC 121
//				Prof: Mr. Ahmadnia
//				Description: 
//-----------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main()
{

	int day;
	for (day=1; day<=31; day++)
	{
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
		
		cout << day << daySuffix << endl;
	}
	
	system("pause");
	return 0;
}


