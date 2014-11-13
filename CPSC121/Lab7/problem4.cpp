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
int f(int n);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    for (int n=2; n<=10; n++)
	{

		cout << "  ";
		int total=0;
		int result = f(n);
		cout << "=" << result << endl;
	}
	system("pause");
    return 0;
}

int f(int n)
{
    if (n==2)
    {
        cout << 3 << "^" << 2;
        return pow(float(3),2);
    }
    else
    {
        cout << 3 << "^" << n << "+";
        return pow(float(3),n) + f(n-1);
    }
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Tue Oct 21 15:44:18 2014

  3^2=9
  3^3+3^2=36
  3^4+3^3+3^2=117
  3^5+3^4+3^3+3^2=360
  3^6+3^5+3^4+3^3+3^2=1089
  3^7+3^6+3^5+3^4+3^3+3^2=3276
  3^8+3^7+3^6+3^5+3^4+3^3+3^2=9837
  3^9+3^8+3^7+3^6+3^5+3^4+3^3+3^2=29520
  3^10+3^9+3^8+3^7+3^6+3^5+3^4+3^3+3^2=88569
Press any key to continue . . .
  =======================================================================*/
