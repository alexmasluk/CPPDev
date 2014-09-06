#include <iostream>
#include <string>
using namespace std;

int main()
{

	//input number
	int num;
	cout << "Enter a number <1000: ";
	cin >> num;
	
	//break into 3 parts
	int hundreds, tens, ones;
	hundreds = num/100;
	tens = num/10;

	string hundredsText, tensText, onesText;
	switch (hundreds)
	{
		case 1:
			hundredsText = "One";
			break;
		case 2: 
			hundredsText = "Two";
			break;
		case 3: 
			hundredsText = "Three";
			break;
		case 4: 
			hundredsText = "Four";
			break;
		case 5: 
			hundredsText = "Five";
			break;
		case 6: 
			hundredsText = "Six";
			break;
		case 7: 
			hundredsText = "Seven";
			break;
		case 8: 
			hundredsText = "Eight";
			break;
		case 9: 
			hundredsText = "Nine";
			break;



	}

	system("pause");
	return 0;
}
