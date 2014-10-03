//=========================================================================
// File: problem3.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/25/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 5, Problem No. 3
// Description:
//          Use a series of function calls to perform basic math operations
//
//=========================================================================

#include <iostream>
using namespace std;

void timestamp();
void readData(int& x, int& y, int& z);
int computeSum(int x, int y, int z);
void computeAverage(int x, int y, int z, float& average);
void display(int total, float average);
void findMaxMin(int x, int y, int z, int& max, int& min);
void display(int x, int y, int z, int max, int min);

//====== main =============================================================
//
//=========================================================================

int main()
{
    timestamp();
    //Read data into x,y,z
    int x,y,z;
    cout << "Enter three integer numbers: ";
    readData(x,y,z);

    //Compute the total of x,y,z;
    int total = computeSum(x,y,z);

    //Compute the average of x,y,z;
    float average;
    computeAverage(x,y,z,average);

    //Display total and average of x,y,z
    display(total,average);

    //Find the maximum and minimum of x,y,z
    int max, min;
    findMaxMin(x,y,z,max,min);

    //Display the max and min values
    display(x,y,z,max,min);

    //Terminate the program
    return 0;
}

void readData(int& x, int& y, int& z)
{
    cin >> x >> y >> z;
    return;
}

int computeSum(int x, int y, int z)
{
    return x+y+z;
}

void computeAverage(int x, int y, int z, float& average)
{
    average = (x+y+z)/3.;
    return;
}

void findMaxMin(int x, int y, int z, int& max, int& min)
{
    max=x; min=x;
    if (y>max) max=y;
    if (z>max) max=z;
    if (y<min) min=y;
    if (z<min) min=z;
    return;
}

void display(int total, float average)
{
    cout << "  Total: " << total << endl
         << "  Average: " << average << endl;
    return;
}

void display(int x, int y, int z, int max, int min)
{
    cout << "  the max and in values of " << x << ", "
         << y << ", and " << z << " are " << max
         << " and " << min << endl;
    return;
}


void timestamp()
{
    //timestamp
    time_t p;
    time(&p);
    cout << "Time and date: " << ctime(&p) << endl;
}

/*========================== OUTPUT =============================
Time and date: Wed Oct  1 14:21:13 2014

Enter three integer numbers: 5 3 8
  Total: 16
  Average: 5.33333
  the max and in values of 5, 3, and 8 are 8 and 3
===============================================================*/

