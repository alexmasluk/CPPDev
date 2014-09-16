//=========================================================================
// File: problem4.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/18/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 3, Problem No. 4
// Description: 
// 	Count instances of char 'y' and char 'n' in a user-inputted string
//
//=========================================================================

#include <iostream>
#include <ctime>
#include <random>
using namespace std;

//====== main =============================================================
//
//========================================================================= 

int main()
{
     //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl << endl;

	//declarations
    char c;
    int yTotal=0, nTotal=0;
    
	//input string and count chars
	cout << "Enter a string of YES or NO votes: ";
    while (cin.get(c), c!='\n')
    {
       if (tolower(c)=='y') yTotal++;
       else nTotal++;
    }

	//display results
    cout << "\tYES votes: ";
    for (int i=0; i<yTotal; i++) cout << "* ";
    cout << endl;

    cout << "\tNO votes : ";
    for (int i=0; i<nTotal; i++) cout << "* ";
    cout << endl << endl;


    system("pause");
    return 0;
}
/*=============================================OUTPUT=================================================
Time and date: Tue Sep 16 16:50:05 2014


Enter a string of YES or NO votes: yyNNNYYnn
        YES votes: * * * *
        NO votes : * * * * *

Press any key to continue . . .
=====================================================================================================*/
