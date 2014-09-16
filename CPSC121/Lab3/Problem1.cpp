//=========================================================================
// File: problem1.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/18/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 3, Problem No. 1
// Description: 
// 	Display exchange rate table.
//
//=========================================================================

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

const float EURO_RATE = .77,
            POUND_RATE = .61,
            YEN_RATE = 107.35;

const int DOUBLE_DASH=205,
		  YEN_ASCII=157,
          POUND_ASCII=156,
          EURO_ASCII=238;

//====== main =============================================================
//
//=========================================================================

int main()
{ //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl << endl;

    //get input
    int start, finish, jump;
    cout << "Please enter start, finish, and jump values for the exchange table: ";
    cin >> start >> finish >> jump;

    //output table header
    cout << setfill(' ') 
		 << setw(0)  << "    "
         << setw(9) << "$"
         << setw(12) << char(YEN_ASCII)
         << setw(10) << char(POUND_ASCII)
         << setw(10) << char(EURO_ASCII) << endl;

    for (int i=1; i<50; i++)
        cout << char(DOUBLE_DASH);
    cout << endl;

    //output table
    cout << showpoint << fixed << setprecision(2);
    for (int i = start; i<=finish; i+=jump)
    {
        cout << setw(0)  << "   "
			 << setw(10) << (float(i))
             << setw(12) << i*YEN_RATE
             << setw(10) << i*POUND_RATE
             << setw(10) << i*EURO_RATE
             << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}

/*=============================================OUTPUT=================================================
Time and date: Tue Sep 16 16:35:07 2014


Please enter start, finish, and jump values for the exchange table: 10 100 10
            $           ¥         £         ε
═════════════════════════════════════════════════
        10.00     1073.50      6.10      7.70
        20.00     2147.00     12.20     15.40
        30.00     3220.50     18.30     23.10
        40.00     4294.00     24.40     30.80
        50.00     5367.50     30.50     38.50
        60.00     6441.00     36.60     46.20
        70.00     7514.50     42.70     53.90
        80.00     8588.00     48.80     61.60
        90.00     9661.50     54.90     69.30
       100.00    10735.00     61.00     77.00

Press any key to continue . . .
=====================================================================================================*/
