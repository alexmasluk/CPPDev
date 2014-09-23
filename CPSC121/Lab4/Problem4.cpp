//=========================================================================
// File: problem4.cpp, students.txt
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/25/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 4, Problem No. 4
// Description:
//      Read input from a text file into an array
//
//=========================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct STUDENT
{
	string name;
	int age;
	bool isTeenager;
};
const int NUM_STUDENTS=7;

//====== main =============================================================
//
//=========================================================================
int main()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;

	STUDENT students[NUM_STUDENTS];
	fstream inputFile;
	inputFile.open("students.txt", ios::in);

	int maxAge=students[0].age;
	int maxAgeIndex;
		
	cout << setfill(' ');
	cout << "  Name               Age\n";
	
    for (int i=0; i<25; i++) cout << char(196);
	cout << endl;

	for (int i=0; i<NUM_STUDENTS; i++)
	{
		inputFile >> students[i].name >> students[i].age;
		cout << left << "  " << setw(20) << students[i].name 
			 << right << setw(2) << students[i].age 
			 << endl;

		if (students[i].age>maxAge)
		{
			maxAge=students[i].age;
			maxAgeIndex=i;
		}

		if (students[i].age>12 && students[i].age<20)
			students[i].isTeenager=true;
		else 
			students[i].isTeenager=false;
	}

	cout << "Oldest student: " << students[maxAgeIndex].name << endl;
	cout << "Name of teenager students: ";
	for (int i=0; i<NUM_STUDENTS; i++)
		if (students[i].isTeenager)
			cout << students[i].name << " ";
	cout << endl << endl;

	system("pause");
	return 0;
}
/*==========================OUTPUT==========================
Time and date: Tue Sep 23 16:34:03 2014

  Name               Age
─────────────────────────
  Jefferson           17
  Bill                24
  Mary                19
  Jack                22
  Matthew             19
  Claudia             23
  Judy                18
Oldest student: Bill
Name of teenager students: Jefferson Mary Matthew Judy

Press any key to continue . . .
===========================================================*/
