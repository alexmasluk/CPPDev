//=========================================================================
// File: problem2.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 10/23/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 7, Problem No. 2
// Description:
//          Process text file using dynamic array
//
//=========================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
using namespace std;

struct PERSON
{
    int age;
    float gpa;
    char name[20];
};

void timestamp();
int getNumRecords(char fileName[]);
void readData(char fileName[], PERSON p[], int n);
void displayData(PERSON p[], int n);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    PERSON *p;
    char fName[] = "two.txt";
    int numRecords = getNumRecords(fName);
    p = new PERSON[numRecords];
    readData(fName, p, numRecords);
    displayData(p, numRecords);
    delete p;
    return 0;
}

int getNumRecords(char fileName[])
{
    fstream f;
    f.open(fileName, ios::in);
    int n;
    f >> n;
    f.close();
    return n;
}

void readData(char fileName[], PERSON p[], int n)
{
    fstream f;
    f.open(fileName, ios::in);
    f.ignore();
    for (int i=0; i<n; i++)
    {
        f >> p[i].age;
        f >> p[i].gpa;
        f.get(p[i].name, 20, '\n');
    }
    f.close();
}

void displayData(PERSON p[], int n)
{
    cout << showpoint << fixed << setprecision(1);
    cout << "Age  GPA   Name\n";
    cout << "--------------------------\n";
    for (int i=0; i<n; i++)
    {
        cout << left << setw(5) << p[i].age;
        cout << setw(5) << p[i].gpa;
        cout << p[i].name;
        cout << endl;
    }
}

void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Sun Oct 19 11:57:38 2014

Age  GPA   Name
--------------------------
22   2.2   Bill Clinton
33   3.3   Phil Jackson
44   4.0   Mary A Johnson
25   2.5   Adam Smith
65   3.2   George W Bush
=======================================================================*/
