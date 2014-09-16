#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const float EURO_RATE = .77,
            POUND_RATE = .61,
            YEN_RATE = 107.35;

const int YEN_ASCII=165,
          POUND_ASCII=163,
          EURO_ASCII=128;

int main()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl << endl;

    int start, finish, jump;
    cout << "Please enter start, finish, and jump values for the exchange table: ";
    cin >> start >> finish >> jump;


    cout << setfill(' ') << internal
         << setw(10) << "$  "
         << setw(12) << char(YEN_ASCII)
         << setw(10) << char(POUND_ASCII)
         << setw(10) << char(EURO_ASCII) << endl;

    for (int i=1; i<50; i++)
        cout << char(151);
    cout << endl;

    cout << showpoint << fixed << setprecision(2) << right;
    for (int i = start; i<=finish; i+=jump)
    {
        cout << setw(10) << float(i)
             << setw(12) << i*YEN_RATE
             << setw(10) << i*POUND_RATE
             << setw(10) << i*EURO_RATE
             << endl;
    }

    cout << endl;

    //system("pause");
    return 0;
}

