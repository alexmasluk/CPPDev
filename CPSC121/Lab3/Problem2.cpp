//=========================================================================
// File: problem2.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/18/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 3, Problem No. 2
// Description: 
// 	Count number of upper and lowercase letters in a string.
//
//=========================================================================

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

const int LEFT_WIDTH = 35;

//====== main =============================================================
//
//========================================================================= 

int main()
{
    //timestamp;
    time_t p;
    time(&p);
    cout << "Today's time and date: " << ctime(&p) << endl << endl;

	//get input and count cases
    int numUppers=0, numDigits=0, numVowels=0;
    char c;
    cout << "\tEnter a sentence: ";
    while (cin.get(c), c != '\n')
    {
        if (c>='A'&&c<='Z')
            numUppers++;
        else if (c>='0'&&c<='9')
            numDigits++;
        if (c=='a'||c=='A'||
            c=='e'||c=='E'||
            c=='i'||c=='I'||
            c=='o'||c=='O'||
            c=='u'||c=='U')
            numVowels++;
    }

	//output results
    cout << setfill('.');
    cout << left << setw(LEFT_WIDTH);
    cout << "\tNumber of uppercase letters";
    cout << right << setw(1);
    cout << numUppers << endl;

    cout << left << setw(LEFT_WIDTH);
    cout << "\tNumber of digits";
    cout << right << setw(1);
    cout << numDigits << endl;

    cout << left << setw(LEFT_WIDTH);
    cout << "\tNumber of vowels";
    cout << right << setw(1);
    cout << numVowels << endl << endl;

    system("pause");
    return 0;
}
/*=============================================OUTPUT=================================================
Today's time and date: Tue Sep 16 16:39:51 2014


        Enter a sentence: Today Is Thr Sep 14, 2014
        Number of uppercase letters.......4
        Number of digits..................6
        Number of vowels..................4

Press any key to continue . . .
=====================================================================================================*/
