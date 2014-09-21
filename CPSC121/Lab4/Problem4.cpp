//=========================================================================
// File: problem4.cpp
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
#include <fstream>
#include <string>
using namespace std;

//====== main =============================================================
//
//=========================================================================
int main()
{
    ifstream inputFile;
    inputFile.open("names.txt");

    string line;
    if (inputFile.is_open())
    {
        while (getline (inputFile, line))
        {
            cout << line << endl;
        }
    }
    inputFile.close();

//    system("pause");
	return 0;

}

/*============================= OUTPUT ====================================
=========================================================================*/
