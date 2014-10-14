//=========================================================================
// File:
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/16/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 6, Problem No.2
// Description:
//          Read data from text file, using delimeter to terminate cstrings
//
//=========================================================================

#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <ctime>
using namespace std;

struct RECORD
{
    char name[15];
    int age;
    float gpa;
};

void timestamp();
void copyRecords(string fname, RECORD p[]);
void display(RECORD p[]);
void ageGpaAverage(RECORD p[], float& ageAve, float& gpaAve);
void display(float a, float b);

const int N=5;

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    RECORD p[N];
    float gpaAve, ageAve;

    copyRecords("data2.txt", p);
    display(p);
    ageGpaAverage(p, ageAve, gpaAve);
    display(ageAve,gpaAve);

	return 0;
}

void copyRecords(string fname, RECORD p[])
{
    fstream f;
    f.open(fname, ios::in);
    for (int i = 0; i < N; i++)
    {
        f.getline(p[i].name, 20, '/');
		f >> p[i].age;
        f >> p[i].gpa;
		f.ignore();
    }
    f.close();
}

void display(RECORD p[])
{
	cout << " Name               Age GPA\n";
	cout << "---------------------------\n";
    for (int i = 0; i < N; i++)
    {
        cout << setw(20) << left <<strupr(p[i].name);
        cout << setw(3) << p[i].age << " " << p[i].gpa;
		cout << endl;
    }
}

void ageGpaAverage(RECORD p[], float& ageAve, float& gpaAve)
{
    int totalAge=0;
    float totalGpa=0;
    for (int i = 0; i < N; i++)
    {
        totalAge+=p[i].age;
        totalGpa+=p[i].gpa;
    }
    ageAve=float(totalAge)/N;
    gpaAve=totalGpa/N;
}

void display(float a, float b)
{
    cout << "Their AGE average is " << a  
		 << " and their GPA average is " << b << endl;
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Tue Oct 14 15:55:41 2014

 Name               Age GPA
---------------------------
MARTIN SMITH        22  2.2
AUSTIN CLINTON      18  3.1
JOHNSON             19  2.9
MAGGIE JONES        23  2.3
TYLER W BROWN       16  3.4
Their AGE average is 19.6 and their GPA average is 2.78
=========================================================================*/
