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
//      Overload operators to add, subtract, and multiply coordinates
//
//=========================================================================

#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>
#include <sstream>
#include <random>
#include <cmath>
#include <iomanip>
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
        friend float dist(POINT a, POINT b);
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

    cout << A.print() << " + " << B.print() << " = "
         << (A+B).print() << endl;
    cout << A.print() << " - " << B.print() << " = "
         << (A-B).print() << endl;

    cout << "Enter a magnitude: ";
    int mag; cin >> mag;
    cout << A.print() << " * " << mag << " = "
         << (A*mag).print() << endl;

    cout << setprecision(2) << showpoint << fixed;
    cout << "The distance from A to B is " << dist(A,B);

    return 0;
}

string POINT::print()
{
    stringstream stm;
    stm << name << '(' << x << ',' << y << ')';
    return stm.str();
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

float dist(POINT a, POINT b)
{
    int x = a.x-b.x;
    int y = a.y-b.y;
    return sqrt(x*x+y*y);
}
void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Wed Dec  3 21:28:59 2014

Enter the coordinates of point A: 2 3
Enter the coordinates of point B: 5 7
A(2,3) + B(5,7) = C(7,10)
A(2,3) - B(5,7) = C(-3,-4)
Enter a magnitude: 4
A(2,3) * 4 = C(8,12)
The distance from A to B is 5.00
  =======================================================================*/
