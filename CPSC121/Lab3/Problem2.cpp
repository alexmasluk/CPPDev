#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

const int LEFT_WIDTH = 35;


int main()
{
    //timestamp;
    time_t p;
    time(&p);
    cout << "Today's time and date: " << ctime(&p) << endl << endl;

    int numUppers=0, numDigits=0, numVowels=0;
    char c;
    cout << "\tEnter a sentence: ";
    while (cin.get(c), c != '\n')
    {
        if (c>='A'&&c<='Z')
            numUppers++;
        else if (c>='0'&&c<='9')
            numDigits++;
        if (c=='a'||c=='A'||
            c=='e'||c=='E'||
            c=='i'||c=='I'||
            c=='o'||c=='O'||
            c=='u'||c=='U')
            numVowels++;
    }

    cout << setfill('.');
    cout << left << setw(LEFT_WIDTH);
    cout << "\tNumber of uppercase letters";
    cout << right << setw(1);
    cout << numUppers << endl;

    cout << left << setw(LEFT_WIDTH);
    cout << "\tNumber of digits";
    cout << right << setw(1);
    cout << numDigits << endl;

    cout << left << setw(LEFT_WIDTH);
    cout << "\tNumber of vowels";
    cout << right << setw(1);
    cout << numVowels << endl;

    //system("pause");
    return 0;
}
