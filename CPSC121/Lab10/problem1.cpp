//=========================================================================
// File: problem1.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 11/13/14
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 10, Problem No. 1
// Description:
//      Calculate rectangle perimeter
//
//=========================================================================

#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

class POINT
{
    private:
        int x,y;
        char name;
    public:
        POINT();
        void ReadData(char vertex);
        void Display();
        friend float Distance(POINT p, POINT q);
        ~POINT();
};

void DisplayPer(float AB, float AC, float CD, float BD);
void timestamp();

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    POINT A,B,C,D;
    cout << showpoint << fixed << setprecision(2);
    cout << "For the rectangle ABCD:\n";
    A.ReadData('A');
    B.ReadData('B');
    C.ReadData('C');
    D.ReadData('D');

    //draw the rectangle
    cout << "   "; A.Display();
           cout<<"---------------------------";B.Display();cout<<endl;
    cout  << "\t\t|                         |\n";
    cout  << "\t\t|                         |\n";
    cout  << "\t\t|                         |\n";
    cout  << "   "; C.Display();
           cout<<"---------------------------";D.Display();cout<<endl;

    //display measurements
    float AB=Distance(A,B); cout << "  AB="<<AB<<endl;
    float AC=Distance(A,C); cout << "  AC="<<AC<<endl;
    float CD=Distance(C,D); cout << "  CD="<<CD<<endl;
    float BD=Distance(B,D); cout << "  BD="<<BD<<endl;
    DisplayPer(AB,AC,CD,BD);
    return 0;
}

POINT::POINT(){}
void POINT::ReadData(char vertex)
{
   name=vertex;
   cout << "  Enter the x and y coordinate of vertex " << name <<": ";
   cin >> x >> y;
}

void POINT::Display()
{
   cout << name << "(" << float(x) << "," << float(y) << ")";
}

float Distance(POINT p, POINT q)
{
    float xdist = q.x-p.x;
    float ydist = q.y-p.y;
    return sqrt(pow(xdist,2)+pow(ydist,2));
}

void DisplayPer(float AB, float AC, float CD, float BD)
{
    cout << "   Perimeter="<<(AB+AC+CD+BD)<<endl;
}
POINT::~POINT(){}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT==================================
Time and date: Wed Nov 12 21:47:30 2014

For the rectangle ABCD:
  Enter the x and y coordinate of vertex A: 10 7
  Enter the x and y coordinate of vertex B: 20 7
  Enter the x and y coordinate of vertex C: 10 2
  Enter the x and y coordinate of vertex D: 20 2
    A(10.00,7.00)---------------------------B(20.00,7.00)
                 |                         |
                 |                         |
                 |                         |
    C(10.00,2.00)---------------------------D(20.00,2.00)
  AB=10.00
  AC=5.00
  CD=10.00
  BD=5.00
   Perimeter=30.00
=======================================================================*/
