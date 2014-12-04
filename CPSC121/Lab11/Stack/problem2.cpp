//=========================================================================
// File: problem2.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 12/4/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 11, Problem No. 2
// Description:
//      Use Stack to 1) reverse string, 2) convert numbers to diff bases
//
//=========================================================================
#include <iostream>
#include <ctime>
#include <string>
#include "stack.h"
using namespace std;

void timestamp();
void stringReverser();
void numberConverter();

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    stringReverser();
    numberConverter();
    return 0;
}

void stringReverser()
{
    Stack<char, 30> s;
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    for (int i=0; i<sentence.length(); i++)
        s.push(sentence[i]);
    while (!s.isEmpty())
        cout << s.pop();
    cout << endl;
}

void numberConverter()
{
    Stack<int, 30> s;
    int val, base;
    cout << "Enter a value and base: ";
    cin >> val >> base;
    int originalValue=val;
    while (val!=0)
    {
        s.push(val%base);
        val/=base;
    }

    cout << originalValue << " in base " << base << " = ";
    while (!s.isEmpty())
    {
        int n = s.pop();
        if (n<10) cout << n;
        else cout << char(n+55);
    }

    cout << endl;

}
void timestamp()
{
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*===============================OUTPUT====================================
Time and date: Wed Dec  3 19:05:04 2014

Enter a sentence: Happy Thanksgiving
gnivigsknahT yppaH
Enter a value and base: 58 2
58 in base 2 = 111010
Enter a value and base: 58 8
58 in base 8 = 72
Enter a value and base: 58 16
58 in base 16 = 3A
=======================================================================*/
