//=========================================================================
// File: problem3.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/23/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 7, Problem No. 3
// Description:
//          Use <cstring> to analyze and manipulate a char array
//
//=========================================================================

#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

void timestamp();
void findFirst(char n[], char f[]);
void strlwr(char c[]);
void strupr(char c[]);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();

    cout << "Enter your full name: ";
    char c[20];
    cin.get(c, 20, '\n');

    cout << "  Your name's length is " << strlen(c) << endl;
    strlwr(c);
    cout << "  Your name in lower case: " << c << endl;
    strupr(c);
    cout << "  Your name in upper case: " << c << endl;


    char fName[10];
    findFirst(c, fName);
    cout << "  Your first name is: " << fName << endl << endl;

    char fName2[10];
    cin.ignore();
    cout << fName << ", what is your friend's first name? ";
    cin.get(fName2, 10, '\n');
    strupr(fName2);

    if (strcmp(fName, fName2)==0)
        cout << "  Your name is the same as your friend's name\n";

    return 0;
}

void findFirst(char n[], char f[])
{
    char s=n[0]; int index=0;
    while (s!=' ')
    {
        f[index] = s;
        s = n[++index];
    }
    f[index] = '\0';

}
void strlwr(char c[])
{
    for (int i=0; i<strlen(c); i++)
        c[i] = tolower(c[i]);
}

void strupr(char c[])
{
    for (int i=0; i<strlen(c); i++)
        c[i] = toupper(c[i]);
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Sun Oct 19 14:04:21 2014

Enter your full name: Barack H Obama
  Your name's length is 14
  Your name in lower case: barack h obama
  Your name in upper case: BARACK H OBAMA
  Your first name is: BARACK

BARACK, what is your friend's first name? barack
  Your name is the same as your friend's name
=======================================================================*/
