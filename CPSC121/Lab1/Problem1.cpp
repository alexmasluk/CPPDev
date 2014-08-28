//-----------------------------------------------------------------------
//
//
//
//
//
//
//-----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double E = 2.71828182845904523536;

int main()
{

	//declarations
	double initDeposit, interestRate, finalAmount;
	int years;

	//get user input
	cout << "\tEnter the money you want to deposit now(P): ";
	cin >> initDeposit;
	cout << "\tEnter the interest rate: ";
	cin >> interestRate;
	cout << "\tEnter the duration in years(t): ";
	cin >> years;
	 
	//calculate and display final balance
	finalAmount = initDeposit * pow(E, interestRate*years);
	cout << fixed << setprecision(2);
	cout << "\t\tYour balance after 5 years is " << finalAmount << "\n";
	
	system("pause");
	return 0;
}
/*							OUTPUT						      *\

        Enter the money you want to deposit now(P): 20000
        Enter the interest rate: .05
        Enter the duration in years(t): 5
                Your balance after 5 years is 25680.51
Press any key to continue . . .
*/
