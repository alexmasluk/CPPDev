#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
template<class T> void displayArray(T arr[], int length);
string makeUpper(string s);

int main()

{
    int age[] = {22,33,11,16,10};
    string name[] = {"Bill", "Adam", "Mary", "David"};

    cout << "   Original array age: ";
    displayArray(age,5);
    cout << endl;
    cout << "   Original array name: ";
    displayArray(name,4);
    cout << endl;

    sort(age, age+5); sort(name, name+4);

    cout << "   Sorted array age: ";
    displayArray(age, 5);
    cout << endl;
    cout << "   Sorted array name: ";
    displayArray(name, 4);
    cout << endl;

    for (int i=0; i<4; i++)
        name[i] = makeUpper(name[i]);

    cout << "   Sorted names in uppercase: ";
    displayArray(name, 4);
    cout<< endl;

}
template<class T>
void displayArray(T arr[], int length)
{
    for(int i=0; i<length; i++)
        cout << arr[i] << " ";
    return;
}

string makeUpper(string s)
{
    for(int i=0; i<s.length(); i++)
        s[i] = toupper(s[i]);
    return s;
}
/*======================== OUTPUT ===========================
   Original array age: 22 33 11 16 10
   Original array name: Bill Adam Mary David
   Sorted array age: 10 11 16 22 33
   Sorted array name: Adam Bill David Mary
   Sorted names in uppercase: ADAM BILL DAVID MARY
============================================================*/
