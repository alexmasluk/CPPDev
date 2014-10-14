//=========================================================================
// File:
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/16/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 6, Problem No. 1
// Description:
//          Read a series of numbers from a text file into an array
//
//=========================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

void timestamp();
void formatDecimal();
void copyData(string name, int a[]);
float findAve(int a[]);
void display(int a[]);
void display(int a[], float ave);
void display(int a, int b);
void findMaxMin(int a[], int& x, int& n);

const int N=6;

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    formatDecimal();

    string fname = "data.txt";
    int a[N];

    //copy data from file into array a
    copyData(fname, a);

    //display array a
    display(a);

    //find and display average of numbers in array a
    float average = findAve(a);
    cout << "Average = " << average << endl;

    //display numbers whose value is >= average
    display(a, average);

    //find and display the maximum and minimum numbers in array a
    int max, min;
    findMaxMin(a, max, min);
    display(max,min);

    //terminate program
    return 0;
}

void copyData(string name, int a[])
{
    fstream f;
    f.open(name, ios::in);
    for (int i=0; i<N; i++)
        f >> a[i];
    f.close();
}

float findAve(int a[])
{
    int total=0;
    for (int i=0; i<N; i++)
        total+=a[i];
    return float(total)/N;
}

void display(int a[])
{
    cout << "This is array a: ";
    for (int i=0; i<N; i++)
        cout << a[i] << " ";
    cout << endl;
}

void display(int a[], float ave)
{
    cout << "Data values above average: ";
    for (int i = 0; i < N; i++)
        if (a[i]>ave)
            cout << a[i] << " ";
    cout << endl;
}

void display(int a, int b)
{
    cout << "Maximum = " << a << endl;
    cout << "Minimum = " << b << endl;
}

void findMaxMin(int a[], int& x, int& n)
{
    x = a[0];
    n = a[0];
    for (int i = 1; i < N; i++)
    {
        if (a[i]>x) x=a[i];
        if (a[i]<n) n=a[i];
    }
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

void formatDecimal()
{
    cout << setprecision(2)
         << fixed
         << showpoint;
}
/*===============================OUTPUT====================================
Time and date: Fri Oct 10 09:53:42 2014

This is array a: 44 33 19 9 70 11
Average = 31.00
Data values above average: 44 33 70
Maximum = 70
Minimum = 9
=========================================================================*/
