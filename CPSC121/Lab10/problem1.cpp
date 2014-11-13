#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class POINT
{
    private:
        int x,y;

        POINT();
        void ReadData(char vertex);
        void Display(char vertex);
        friend float Distance(POINT p, POINT q);
        friend void DisplayPer(float AB, float AC, float CD, float BD);
        ~POINT();
};

int main()
{
    POINT A,B,C,D;
    cout << "For the rectangle ABCD:\n";
    A.ReadData();
    B.ReadData();
    C.ReadData();
    D.ReadData();

    //draw the rectangle
    A.Display('A');cout<<"---------------------------";B.Display('B');cout<<endl;
    cout << "             |                         |\n";
    cout << "             |                         |\n";
    cout << "             |                         |\n";
    C.Display('C');cout<<"---------------------------";D.Display('D');cout<<endl;

    //display measurements
    float AB=Distance(A,B); cout << " AB="<<AB<<endl;
    float AC=Distance(A,C); cout << " AC="<<AC<<endl;
    float CD=Distance(C,D); cout << " CD="<<CD<<endl;
    float BD=Distance(B,D); cout << " BD="<<BD<<endl;
    DisplayPer(AB,AC,CD,BD);
    return 0;
}

POINT
