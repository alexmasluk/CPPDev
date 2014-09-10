#include <iostream>
#include <string>
using namespace std;

int main()
{

	//input number
	/*int num;
	cout << "Enter a number <1000: ";
	cin >> num;*/
	int num;
	for (int i=1; i<1000; i++)
	{
	//break into 3 parts
		num=i;
	int hundreds, tens, ones;
	hundreds = num/100;
    num -= hundreds*100;
	tens = num/10;
    num -= tens*10;
    ones = num;

	string hundredsText, tensText, onesText;
	switch (hundreds)
	{
		case 1:
			hundredsText = "One ";
			break;
		case 2:
			hundredsText = "Two ";
			break;
		case 3:
			hundredsText = "Three ";
			break;
		case 4:
			hundredsText = "Four ";
			break;
		case 5:
			hundredsText = "Five ";
			break;
		case 6:
			hundredsText = "Six ";
			break;
		case 7:
			hundredsText = "Seven ";
			break;
		case 8:
			hundredsText = "Eight ";
			break;
		case 9:
			hundredsText = "Nine ";
			break;
		default:
			hundredsText = "";
	}
    hundredsText = (hundreds != 0)? hundredsText + "Hundred ": "";

	switch (ones)
	{
		case 1:
			onesText = "One";
			break;
		case 2:
			onesText = "Two";
			break;
		case 3:
			onesText = "Three";
			break;
		case 4:
			onesText = "Four";
			break;
		case 5:
			onesText = "Five";
			break;
		case 6:
			onesText = "Six";
			break;
		case 7:
			onesText = "Seven";
			break;
		case 8:
			onesText = "Eight";
			break;
		case 9:
			onesText = "Nine";
			break;
		default:
			onesText = "";
	}

	switch (tens)
	{
	    case 0:
            cout << hundredsText;
			if (hundreds > 0 && ones>0) 
				cout << " and ";
			cout << onesText;
            break;
        case 1:
            switch (ones)
            {
                case 0:
                    cout << hundredsText << "Ten";
                    break;
                case 1:
                    cout << hundredsText << "Eleven";
                    break;
                case 2:
                    cout << hundredsText << "Twelve";
                    break;
				case 3:
					cout << hundredsText << "Thirteen";
					break;
				case 5:
					cout << hundredsText << "Fifteen";
					break;
                default:
                    cout << hundredsText << onesText << "teen";
            }
            break;
        case 2:
            cout << hundredsText << " Twenty " << onesText;
            break;
        case 3:
            cout << hundredsText << " Thirty " << onesText;
            break;
        case 4:
            cout << hundredsText << " Forty " << onesText;
            break;
        case 5:
            cout << hundredsText << " Fifty " << onesText;
            break;
        case 6:
            cout << hundredsText << " Sixty " << onesText;
            break;
        case 7:
            cout << hundredsText << " Seventy " << onesText;
            break;
        case 8:
            cout << hundredsText << " Eighty " << onesText;
            break;
        default:
            cout << hundredsText << " Ninety " << onesText;
	}
    cout << endl;
	if (tens == 0)
		system("pause");
	} 
	system("pause");
	return 0;
}
