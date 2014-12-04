//=========================================================================
// File: problem3.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 12/4/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 11, Problem No. 3
// Description:
//    Use a template class to store and sort arrays
//
//=========================================================================

#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>
#include <random>
using namespace std;

void timestamp();
class POINT
{
    private:
        char name;
        int x,y;
    public:
        POINT(int a, int b, char n)
        { name=n; x=a; y=b; }
        string print();
        friend POINT operator+(POINT a, POINT b);
        friend POINT operator-(POINT a, POINT b);
        friend POINT operator*(POINT a, int mag);
};

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    int x, y;
    cout << "Enter the coordinates of point A: ";
    cin >> x >> y;
    POINT A(x,y,'A');

    cout << "Enter the coordinates of point B: ";
    cin >> x >> y;
    POINT B(x,y,'B');

    cout << A.print() << " + " << B.print() << " = " << (A+B).print();
    cout << A.print() << " - " << B.print() << " = " << (A-B).print();

    cout << "Enter a magnitude: ";
    int mag; cin >> mag;
    cout << A.print() << " * " << B.print() << " = " << (A+B).print();
    return 0;
}

POINT operator+(const POINT a, const POINT b)
{
    int x = a.x+b.x;
    int y = a.y+b.y;
    POINT c(x,y,'C');
    return c;
}

POINT operator-(POINT a, POINT b)
{
    int x = a.x-b.x;
    int y = a.y-b.y;
    POINT c(x,y,'C');
    return c;
}

POINT operator*(POINT a, int mag)
{
    int x = a.x*mag;
    int y = a.y*mag;
    POINT c(x,y,'C');
    return c;
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
  =======================================================================*/
