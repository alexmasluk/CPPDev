#include <iostream>
#include <iomanip>
using namespace std;

const int LEFT = 5;
const char FILL = '-';

int main()
{

    cout << setfill(FILL);
    for (int i=0; i<300; i++)
        cout << left << setw(LEFT) << i << right << setw(1) << char(i) << endl;

    for (int i=0; i<5; i++)
        cout << char(151);
    cout << endl;
    for (int i=0; i<5; i++)
        cout << char(175);
    cout << endl;
    for (int i=0; i<5; i++)
        cout << "=";
    cout << endl;
    return 0;

}
