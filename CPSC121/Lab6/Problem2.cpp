//=========================================================================
// File:
//=========================================================================
// Programmer: Alex Masluk
// Date:
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. , Problem No.
// Description:
//
//
//=========================================================================

#include <iostream>
#include <string>
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
        string line;
        getline(f, line);
        p[i].name;
        f >> p[i].age;
        f >> p[i].gpa;
    }
    f.close();
}

void display(RECORD p[])
{
    for (int i = 0; i < N; i++)
    {
        cout << setw(20) << left;
        int nameIndex = 0;
        char c = p[i].name[nameIndex];
        while (c!='/')
        {
            cout << toupper(c);
            c = p[i].name[++nameIndex];
        }

        cout << setw(2);
        cout << p[i].age;
        cout << right << setw(3);
        cout << p[i].gpa;
        cout << endl << left;
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
    cout << "Average age = " << a << endl;
    cout << "Average gpa = " << b << endl;
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
=========================================================================*/
