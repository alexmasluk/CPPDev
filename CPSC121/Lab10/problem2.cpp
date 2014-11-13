//=========================================================================
// File: problem2.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 11/13/14
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 10, Problem No. 2
// Description:
//      Manage an array of ages with class TWO
//
//=========================================================================

#include <iostream>
#include <ctime>
using namespace std;

class TWO
{
    private: int age[5];
    public:
             TWO();
             void ReadData();
             friend int FindAverage(TWO p);
             void FindMaxMin(int &maxAge, int& minAge);
             void aboveAve(int ageAve);
             void DisplayMaxMinAge(int maxAge, int minAge);
             ~TWO();
};
void timestamp();

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    TWO t;
    t.ReadData();
    int ave=FindAverage(t);
    int max, min;
    t.FindMaxMin(max, min);
    t.aboveAve(ave);
    t.DisplayMaxMinAge(max,min);
    return 0;
}

TWO::TWO(){}
TWO::~TWO(){}

void TWO::ReadData()
{
    cout << "Enter 5 ages: ";
    for (int i=0; i<5; i++) cin >> age[i];
}

int FindAverage(TWO p)
{
    int total=0;
    for (int i=0; i<5; i++)
        total+=p.age[i];
    return total/5;
}

void TWO::FindMaxMin(int &maxAge, int &minAge)
{
    maxAge=age[0];
    minAge=age[0];
    for (int i=1; i<5; i++)
    {
        if (age[i]>maxAge) maxAge=age[i];
        if (age[i]<minAge) minAge=age[i];
    }
}

void TWO::aboveAve(int ageAve)
{
    cout << "  Ages above average: ";
    for (int i=0; i<5; i++)
        if (age[i]>ageAve)
            cout << age[i] << " ";
    cout << endl;
}

void TWO::DisplayMaxMinAge(int maxAge, int minAge)
{
    cout << "  Maximum age is " << maxAge << endl;
    cout << "  Minimum age is " << minAge << endl;
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT==================================
Time and date: Wed Nov 12 21:54:29 2014

Enter 5 ages: 22 27 19 17 25
  Ages above average: 27 25
  Maximum age is 27
  Minimum age is 17
=======================================================================*/
