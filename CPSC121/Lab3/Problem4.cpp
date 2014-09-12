#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl << endl;

    char c;
    int yTotal=0, nTotal=0;
    cout << "Enter a string of YES or NO votes: ";
    while (cin.get(c), c!='\n')
    {
       if (tolower(c)=='y') yTotal++;
       else nTotal++;
    }

    cout << "\tYES votes: ";
    for (int i=0; i<yTotal; i++) cout << "* ";
    cout << endl;

    cout << "\tNO votes : ";
    for (int i=0; i<nTotal; i++) cout << "* ";
    cout << endl;

}
