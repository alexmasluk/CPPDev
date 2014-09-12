#include <iostream>
#include <ctime>
#include <random>
using namespace std;
int main()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl << endl;

    //seed random generator
    srand(time(0));

    cout << "    Let's practice addition with random integer numbers < 100!\n\n";
    int a,b,answer, numCorrect=0, numWrong=0;
    char cont;
    do
    {
        a=rand()%100; b=rand()%100;
        cout << "\t" << a << " + " << b << " = ? ";
        cin >> answer;
        if (answer==a+b)
        {
            cout << "\t  CORRECT\n";
            numCorrect++;
        }
        else
        {
            cout << "\t  WRONG\n";
            numWrong++;
        }
        cout << "\t  Continue(y/n)? ";
        cin >> cont;
    } while (toupper(cont)=='Y');

    cout << endl;
    cout << "Number of CORRECT answers: " << numCorrect << endl;
    cout << "Number of WRONG answers: " << numWrong << endl;

    //system("pause");
    return 0;

}
