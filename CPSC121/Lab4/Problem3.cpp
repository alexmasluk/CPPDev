//=========================================================================
// File: problem3.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/25/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 4, Problem No. 3
// Description:
//
//
//=========================================================================

#include <iostream>
#include <iomanip>
using namespace std;
const int S=0,M=1,L=2,XL=3,
          RED=0,BLUE=1,PINK=2;

//====== main =============================================================
//
//=========================================================================

int main()
{
	//timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;

    int shirts[3][4] = { { 22,30,10, 7 },
                         { 21,23, 7,11 },
                         {  8,11,10,12 } };
    int total=0, totalBlue=0, totalLarge=0;

	//compute totals
    cout << setw(3) << left;
	for (int row=0; row<3; row++)
    {
        for (int col=0; col<4; col++)
        {
            total+=shirts[row][col];
            if (row==BLUE) totalBlue+=shirts[row][col];
            if (col==L) totalLarge+=shirts[row][col];
        }
    }

	//display results
    cout << "Total number of T-Shirts: " << total << endl;
    cout << "Total number of BLUE shirts: " << totalBlue << endl;
    cout << "Total number of LARGE shirts: " << totalLarge << endl
							   << endl;

    system("pause");
	return 0;

}

/*============================= OUTPUT ====================================
Time and date: Tue Sep 23 16:04:16 2014

Total number of T-Shirts: 172
Total number of BLUE shirts: 62
Total number of LARGE shirts: 27

Press any key to continue . . .
=========================================================================*/
