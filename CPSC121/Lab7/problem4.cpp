//=========================================================================
// File: problem4.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/23/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 7, Problem No. 4
// Description:
//      Recursively compute 3^2+3^3+...+3^n
//
//=========================================================================

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

void timestamp();
int f(int n, int total);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    cout << "Enter number to compute: ";
    int n;
    cin >> n;
    cout << "  ";
    int total=0;
    int result = f(n, total);
    cout << "=" << result << endl;
    return 0;
}

int f(int n, int total)
{
    if (n==2)
    {
        cout << 3 << "^" << 2 ;
        return total+=pow(3,2);
    }
    else
    {
        cout << 3 << "^" << n << "+";
        total += pow(3,n);
        return f(n-1, total);
    }
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Sun Oct 19 14:21:23 2014

Enter number to compute: 2
  3^2=9
Enter number to compute: 3
  3^3+3^2=36
Enter number to compute: 4
  3^4+3^3+3^2=117
Enter number to compute: 5
  3^5+3^4+3^3+3^2=360
Enter number to compute: 6
  3^6+3^5+3^4+3^3+3^2=1089
  =======================================================================*/
