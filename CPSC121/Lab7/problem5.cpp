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

    time_t start, end;

    int n=43;

    time(&start);
    cout << "fib("<<n<<")=";
    int x;
    for (int i=0; i<1000; i++) x=fibr(n);
    cout << x << endl;
    time(&end);
    cout << "Recursive operation took " << difftime(end,start) << " seconds\n";

    time(&start);
    cout << "fib("<<n<<")=";
    for (int i=0; i<1000; i++) x=fibi(n);
    cout << x << endl;
    time(&end);
    cout << "Iterative operation took " << difftime(end,start) << " seconds\n";
    return 0;
}

long fibr(long n)
{
    if (n==1) return 1;
    if (n==2) return 1;
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
Time and date: Sun Oct 19 15:24:47 2014

fib(43)=433494437
Recursive operation took 3 seconds
fib(43)=433494437
Iterative operation took 0 seconds
=======================================================================*/

