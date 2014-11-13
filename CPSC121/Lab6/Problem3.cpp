//=========================================================================
// File: Problem3.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/16/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 6, Problem No. 3
// Description:
//          Display arrays of various dimension
//
//=========================================================================

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void timestamp();
void displayA(int a[]);
void displayB(int b[][4]);
void displayC(int c[][3][2]);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    cout << right;
    int a[5] = {1,2,3,4,5};
    int b[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int c[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout << "This is array a\n"; displayA(a);
    cout << "This is array b\n"; displayB(b);
    cout << "This is array c\n"; displayC(c);
    return 0;
}

void displayA(int a[])
{
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
}

void displayB(int b[][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << setw(3) << b[i][j] << " ";
        cout << endl;
    }
}

void displayC(int c[][3][2])
{
    for (int i=0; i<2; i++)
    {
        cout << "Row=" << i << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "  ";
            for (int k = 0; k < 2; k++)
                cout << setw(3) << c[i][j][k] << " ";
            cout << endl;
        }
    }
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Fri Oct 10 10:31:37 2014

This is array a
1 2 3 4 5
This is array b
  1   2   3   4
  5   6   7   8
  9  10  11  12
This is array c
Row=0
    1   2
    3   4
    5   6
Row=1
    7   8
    9  10
   11  12
=========================================================================*/
