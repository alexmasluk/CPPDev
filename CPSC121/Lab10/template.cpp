//=========================================================================
// File:
//=========================================================================
// Programmer: Alex Masluk
// Date:
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. , Problem No.
// Description:
//
//
//=========================================================================

#include <iostream>
#include <ctime>
using namespace std;

void timestamp();

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    return 0;
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
=======================================================================*/
