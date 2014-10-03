//=========================================================================
// File: problem1.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/25/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 5, Problem No. 1
// Description:
//
//
//=========================================================================

#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
using namespace std;


void timestamp();
bool isVowel(char c);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    cout << "I can count the number of upper case, lower case, vowels, and words.\n";
    cout << "Please enter a sentence: ";
    string line;
    getline(cin, line);

    int numUppers=0, numLowers=0, numVowels=0, numSeparators=0;
    for (int i=0; i<line.length(); i++)
    {
        char c = line[i];
        if (isupper(c)) ++numUppers;
        if (islower(c)) ++numLowers;
        if (isVowel(c)) ++numVowels;
//        cout << "char=" << c << " is a vowel? " << isVowel(c) <<endl;
        if (!isalnum(c)) ++numSeparators;
    }

    cout << "Vowels: " << numVowels << endl;
    cout << "Uppers: " << numUppers << endl;
    cout << "Lowers: " << numLowers << endl;
    cout << "Words : " << numSeparators+1 << endl;

//  system("pause");
    return 0;
}

void timestamp()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

bool isVowel(char c)
{
    c = tolower(c);
    return  (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')?
        true : false;
}
/*========================== OUTPUT =============================
Time and date: Fri Sep 26 16:55:14 2014

I can count the number of upper case, lower case, vowels, and words.
Please enter a sentence: Exam No.1 Two Weeks From Now
Vowels: 8
Uppers: 6
Lowers: 15
Words : 7
===============================================================*/
