#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const float EURO_RATE = .66;
const float POUND_RATE = .79;
const float YEN_RATE = 400;

int main()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl << endl;

    int start, finish, jump;
    cout << "Please enter start, finish, and jump values for the exchange table: ";
    cin >> start >> finish >> jump;

    cout << "    $      " << char(165)
         << "      " << char(163)
         << "      " << char(128) << endl;

    for (int i=0; i<4; i++) cout << ' ';
    cout << '$';
    for (int i=0; i<6; i++) cout << ' ';
    cout << char(165);
    for (int i=0; i<6; i++) cout << ' ';
    cout << char(163);
    for (int i=0; i<6; i++) cout << ' ';
    cout << char(128);
    cout << endl;

    for (int i=1; i<30; i++)
        cout << char(151);

    cout << showpoint << fixed << setprecision(2);
    for (int i = start; i<=finish; i+=jump)
    {
        cout << "   " << i   << "   "
             << i*YEN_RATE   << "   "
             << i*POUND_RATE << "   "
             << i*EURO_RATE << endl;
    }

    cout << endl;
    return 0;

}

