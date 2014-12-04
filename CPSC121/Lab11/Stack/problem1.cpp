//=========================================================================
// File: problem1.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 12/4/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 11, Problem No. 1
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
template <class T, int n>
class TWO
{
    private:
        int counter;
        T* a;
    public:
        void readData(T* arr)
        {
            a=arr;
        }


        void displayData()
        {
            for (int i=0; i<n; i++)
                cout << a[i] << " ";
            cout << endl;
        }

        void sortArray()
        {
            sort(a, a+n);
        }
        ~TWO(){}
};
//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    srand(time(0));
    TWO<int, 10> p;
    TWO<string, 12> q;

    int b[10];
    for (int i=0; i<10; i++)
        b[i]=rand()%20;

    string a[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June",
                  "July", "Aug", "Sep", "Oct", "Nov", "Dec"};

    p.readData(b); q.readData(a);
    p.displayData(); q.displayData();
    p.sortArray(); q.sortArray();
    p.displayData(); q.displayData();

    return 0;
}


void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Wed Dec  3 20:53:23 2014

12 18 2 17 9 4 9 1 7 19
Jan Feb Mar Apr May June July Aug Sep Oct Nov Dec
1 2 4 7 9 9 12 17 18 19
Apr Aug Dec Feb Jan July June Mar May Nov Oct Sep
=======================================================================*/
