//=========================================================================
// File: problem1.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/25/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 5, Problem No. 1
// Description:
//
//
//=========================================================================

#include <iostream>
#include <string>
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
===============================================================*/
