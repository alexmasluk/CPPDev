#include <iomanip>
#include <iostream>

using namespace std;

const float COKE_PRICE = 2.10;
const float BURGER_PRICE = 1.85;
const int MENU_LEFT_WIDTH = 19;
const int MENU_RIGHT_WIDTH = 5;

int main()
{
	int amtCokes, amtBurgers;

	//display menu
	cout << setfill('.');
	cout << "----------Menu----------\n";
	cout << left << setw(MENU_LEFT_WIDTH) << "Coke"
		  << right << setw(MENU_RIGHT_WIDTH) << COKE_PRICE;
	cout << endl;

	cout << left << setw(MENU_LEFT_WIDTH) << "Hamburger"
		  << right << setw(MENU_RIGHT_WIDTH) << BURGER_PRICE;
	cout << endl;

	//take order
	cout << "\tHow many cokes? ";
	cin >> amtCokes;
	cout << "\tHow many hamburgers? ";
	cin >> amtBurgers;

	//calculate and display bill
	float bill = amtCokes*COKE_PRICE + amtBurgers*BURGER_PRICE;
	cout << fixed << setprecision(2) 
		  << "\t\tYour total bill: " << bill << "\n";

	system("pause");
	return 0;
}
/*								OUTPUT								*\
----------Menu----------	
Coke.................2.1
Hamburger...........1.85
        How many cokes? 3
        How many hamburgers? 2
                Your total bill: 10.00
Press any key to continue . . .
*/
