//=========================================================================
// File: Problem4.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/16/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 6, Problem No. 4
// Description:
//      Use overloading and template to sort and display arrays
//
//=========================================================================

#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

void timestamp();

void display(int a[], int n);
void display(char c[], int n);
void display(string s[], int n);
template <class C>
void sortArray(C c[], int n);
template <class C>
void showArray(C c[], int n);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    int a[5] = {1,2,3,4,5};
    char c[6] = {'a','r','r','a','y','s'};
    string d[3] = { "try", "enjoy", "programming" };

    cout << "Array a using the Display function: ";
    display(a,5);
    cout << endl;

    cout << "Array b using the Display function: ";
    display(c,6);
    cout << endl;

    cout << "Array c using the Display function: ";
    display(d,3);
    cout << endl;

    sortArray(a,5); sortArray(c,6); sortArray(d,3);
    cout << endl;

    cout << "Array a using the Show function: ";
    showArray(a,5);
    cout << endl;

    cout << "Array b using the Show function: ";
    showArray(c,6);
    cout << endl;

    cout << "Array c using the Show function: ";
    showArray(d,3);
    cout << endl;

    return 0;
}

void display(int a[], int n)
{
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
}

void display(char c[], int n)
{
    for (int i = 0; i<n; i++)
        cout << c[i] << " ";
}

void display(string s[], int n)
{
    for (int i = 0; i<n; i++)
        cout << s[i] << " ";

}

template <class C>
void sortArray(C c[], int n)
{
    sort(c, c+n);
}

template <class C>
void showArray(C c[], int n)
{
    for (int i = 0; i<n; i++)
        cout << c[i] << " ";
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Fri Oct 10 10:52:36 2014

Array a using the Display function: 1 2 3 4 5
Array b using the Display function: a r r a y s
Array c using the Display function: try enjoy programming

Array a using the Show function: 1 2 3 4 5
Array b using the Show function: a a r r s y
Array c using the Show function: enjoy programming try
=========================================================================*/
