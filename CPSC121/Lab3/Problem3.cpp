//=========================================================================
// File: problem3.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/18/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 3, Problem No. 3
// Description: 
// 	Display addition problems with random ints and grade user input
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

    //seed random generator
    srand(time(0));

    //display title and declare variables
    cout << "    Let's practice addition with random integer numbers < 100\n\n";
    int a,b,answer, numCorrect=0, numWrong=0;
    char cont;
    
    //output math problems until user declines to continue
    do
    {
        a=rand()%100; b=rand()%100;
        cout << "\t" << a << " + " << b << " = ? ";
        cin >> answer;
        if (answer==a+b)
        {
            cout << "\t  CORRECT\n";
            numCorrect++;
        }
        else
        {
            cout << "\t  WRONG\n";
            numWrong++;
        }
        cout << "\t  Continue(y/n)? ";
        cin >> cont;
    } while (toupper(cont)=='Y');

    //output number of correct and wrong answers
    cout << endl;
    cout << "    Number of CORRECT answers: " << numCorrect << endl;
    cout << "    Number of WRONG answers: " << numWrong << endl << endl;


    system("pause");
    return 0;
}
/*=============================================OUTPUT=================================================
Time and date: Tue Sep 16 16:43:46 2014


    Let's practice addition with random integer numbers < 100

        95 + 67 = ? 162
          CORRECT
          Continue(y/n)? y
        57 + 23 = ? 49
          WRONG
          Continue(y/n)? y
        39 + 43 = ? 69
          WRONG
          Continue(y/n)? n

    Number of CORRECT answers: 1
    Number of WRONG answers: 2

Press any key to continue . . .
=====================================================================================================*/
