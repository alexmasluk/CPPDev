//=========================================================================
// File: problem5.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/23/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 7, Problem No. 5
// Description:
//          Compare runtime of iterative and recursive fibonacci functions
//
//=========================================================================

#include <iostream>
#include <ctime>
using namespace std;

void timestamp();
long fibr(long n);
long fibi(long n);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();

    int begin, end;

    int n=43;

    begin=clock();
    cout << "fib("<<n<<")=";
    int x;
    x=fibr(n);
    cout << x << endl;
    end=clock();
    cout << "Recursive operation took " << float(end-begin)/CLK_TCK << " seconds\n";

    begin=clock();
    cout << "fib("<<n<<")=";
    x=fibi(n);
    cout << x << endl;
    end=clock();
    cout << "Iterative operation took " << float(end-begin)/CLK_TCK << " seconds\n";
	system("pause");
    return 0;
}

long fibr(long n)
{
    if (n==1||n==2) return 1;
    else return fibr(n-1)+fibr(n-2);
}

long fibi(long n)
{
    if (n==1||n==2) return 1;
    else
    {
        int i=3,total=0,grandparent=1,parent=1;
        do
        {
            total=grandparent+parent;
            grandparent=parent;
            parent=total;
        } while (i++<n);
        return total;
    }

}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Tue Oct 21 15:35:03 2014

fib(43)=433494437
Recursive operation took 20.119 seconds
fib(43)=433494437
Iterative operation took 0 seconds
Press any key to continue . . .
=======================================================================*/

