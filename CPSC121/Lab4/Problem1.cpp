//=========================================================================
// File: problem1.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/25/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 4, Problem No. 1
// Description:
//      Declare, examine, and sort an integer array.
//
//=========================================================================

#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

//====== main =============================================================
//
//=========================================================================

int main()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;

    int a[6]={3,9,7,8,1,4};
    int max=a[0], min=a[0];
    int total=0;

    //Cycle through the array, displaying original values,
    //and tracking min/max/total
    cout << "This is the original array a: ";
    for (int i=0; i<6; i++)
    {
        cout << a[i] << " ";
        if (a[i] > max) max=a[i];
        if (a[i] < min) min=a[i];
        total+=a[i];
    }
    float avg = float(total)/6;
    cout << endl;

    //display min, max, average
    cout << "Maximum=" << max
         << " Minimum=" << min
         << " Average=" << avg << endl;

    //display sorted array
    sort(a, a+6);
    cout << "This is the sorted form of array a: ";
    for (int i=0; i<6; i++) cout << a[i] << " ";
    cout << endl << endl;

    system("pause");
    return 0;

}

/*========================== OUTPUT =============================
Time and date: Tue Sep 23 15:37:38 2014

This is the original array a: 3 9 7 8 1 4
Maximum=9 Minimum=1 Average=5.33333
This is the sorted form of array a: 1 3 4 7 8 9

Press any key to continue . . .
===============================================================*/
