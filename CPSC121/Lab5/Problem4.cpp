//=========================================================================
// File: problem4.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/7/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 5, Problem No. 4
// Description:
//				Determine last name of user
//
//=========================================================================

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


void timestamp();
string findSurname(string s);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();

    char cont = 'y';
    while (tolower(cont)!='n')
    {
        string name;
        cout << "  Please enter your full name: ";
        getline(cin, name);
        cout << "    " << name << ", your last name is ";
        cout << findSurname(name) << endl;
        cout << "    CONTINUE(y/n)? ";
        cin >> cont;
        cin.ignore();
    }
    return 0;
}

string findSurname(string s)
{
    int index=0, lastIndex=0;
    while (index!=-1)
    {
        index = s.find(' ', lastIndex+1);
    //    cout << index;
        if (index>-1) lastIndex=index;
    }
    return s.substr(lastIndex+1);
}

void timestamp()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}


/*========================== OUTPUT =============================
Time and date: Tue Oct 07 15:40:55 2014

  Please enter your full name: Bill Clinton
    Bill Clinton, your last name is Clinton
    CONTINUE(y/n)? y
  Please enter your full name: George W Bush
    George W Bush, your last name is Bush
    CONTINUE(y/n)? y
  Please enter your full name: Barack Hussein Obama
    Barack Hussein Obama, your last name is Obama
    CONTINUE(y/n)? n
===============================================================*/
