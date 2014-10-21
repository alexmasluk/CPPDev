//=========================================================================
// File: problem1.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/23/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 7, Problem No. 1
// Description:
//      Process arrays of various data types using templates.
//
//=========================================================================

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void timestamp();
template <class C> void readData(C a[], int n);
template <class C> void displayData(C a[], int n);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    int a[4]; char c[6]; float f[4]; string s[4];
    //read data into each array
    cout << "Enter 5 integer numbers: "; readData(a,5);
    cout << "Enter 6 characters: ";      readData(c,6);
    cout << "Enter 4 decimal numbers: "; readData(f,4);
    cout << "Enter 4 names: ";           readData(s,4);

    //display all arrays
    cout << "   This is array a: "; displayData(a,5);
    cout << "   This is array c: "; displayData(c,6);
    cout << "   This is array f: "; displayData(f,4);
    cout << "   This is array s: "; displayData(s,4);

    //terminate the program
    return 0;
}

template <class C>
void readData(C a[], int n)
{
    for (int i=0; i<n; i++)
        cin >> a[i];
}

template <class C>
void displayData(C a[], int n)
{
    cout << showpoint << setprecision(3);
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Sun Oct 19 11:19:11 2014

Enter 5 integer numbers: 9 3 8 2 7
Enter 6 characters: C S U F C S
Enter 4 decimal numbers: 2.3 7.7 8.33 4.1
Enter 4 names: Tom Bob Mary John
   This is array a: 9 3 8 2 7
   This is array c: C S U F C S
   This is array f: 2.30 7.70 8.33 4.10
   This is array s: Tom Bob Mary John
=======================================================================*/
