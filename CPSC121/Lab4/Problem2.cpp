//=========================================================================
// File: problem2.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/25/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 4, Problem No. 2
// Description:
//      Display a table of names and salaries; compute average salary
//
//=========================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;

//====== main =============================================================
//
//=========================================================================

int main()
{
	//timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;

    string Names[5]={"Ronald Reagan", "Bill Clinton",
                     "George Bush",   "Barack Obama",
                     "Jimmy Carter"};
    long int Salary[5]={25000,300000,185000,4500,1300};
    long int total=0;

	//display table
    cout << setfill('.');
    cout << "   Name                  Salary\n";
    for (int i=0; i<33; i++) cout << char(196);
    cout << endl;

    for (int i=0; i<5; i++)
    {
        cout << left << setw(27);
        cout << Names[i];
        cout << right << setw(6);
        cout << Salary[i];
        cout << endl;
        total += Salary[i];
    }

	//compute and display average salary
    cout << fixed << showpoint << setprecision(2);
    cout << "  Average salaries is " << float(total)/5
         << endl << endl;

    system("pause");
	return 0;

}

/*============================= OUTPUT =========================
Time and date: Tue Sep 23 15:47:34 2014

   Name                  Salary
─────────────────────────────────
Ronald Reagan...............25000
Bill Clinton...............300000
George Bush................185000
Barack Obama.................4500
Jimmy Carter.................1300
  Average salaries is 103160.00

Press any key to continue . . .
===============================================================*/
