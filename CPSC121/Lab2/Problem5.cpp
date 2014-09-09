//=========================================================================
// File: problem5.cpp
//=========================================================================
// Programmer: Alex Masluk
// Date: 09/11/2014
// Class: CPSC 121 ("Programming Concepts")
// Time: Tues 3:30PM
// Instructor: Dr. Ray Ahmadnia
// Project: Project No. 2, Problem No. 5
// Description: 
// 	Input a number in digits, and convert it to words
//	
//=========================================================================

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//====== main =============================================================
//
//=========================================================================

int main()
{
	//timestamp
	time_t p;
	time(&p);
	cout << "Today's date and time is: " << ctime(&p) << endl << endl;


	//input number
	int num;
	cout << "Enter a number <1000: ";
	cin >> num;

	//extract each column as a single digit
	int hundreds, tens, ones;
	hundreds = num/100;
    num -= hundreds*100;
	tens = num/10;
    num -= tens*10;
    ones = num;

	string hundredsText, tensText, onesText, fullText;
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
		default:
			hundredsText = "";
	}

	//add the word 'hundred' if applicable
    hundredsText = (hundreds != 0)? hundredsText + " Hundred": "";


	//because we need the text for the ones column to create the teens, we examine the ones column next
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
            if (hundreds>0 && ones>0) 
				tensText = "and";
            break;
        case 1:
            switch (ones)
            {
                case 0:
                    tensText = "Ten";
                    break;
                case 1:
                    tensText = "Eleven";
                    break;
                case 2:
                    tensText = "Twelve";
                    break;
				case 3:
					tensText = "Thirteen";
					break;
				case 5:
					tensText = "Fifteen";
					break;
				case 8:
					tensText = "Eighteen";
					break;
                default:
                    tensText = onesText+"teen";
            }
            break;
        case 2:
			tensText = "Twenty";
            break;
        case 3:
            tensText = "Thirty";
            break;
        case 4:
            tensText = "Forty";
            break;
        case 5:
            tensText = "Fifty";
            break;
        case 6:
            tensText = "Sixty";
            break;
        case 7:
            tensText = "Seventy";
            break;
        case 8:
            tensText = "Eighty";
            break;
        case 9:
            tensText = "Ninety";
			break;
	}


	//build the full string, inserting spaces as necessary
	fullText = hundredsText;

	if (hundreds>0) 
		fullText += " ";

	fullText += tensText;
	
	if (tens!=1)
	{
		if (tens>0 || hundreds>0)
			fullText+=" ";
		fullText += onesText;
	}

	cout << "\tYou entered " << fullText << endl;

	system("pause");
	return 0;
}
/*========================================= OUTPUT ==============================================
Today's date and time is: Tue Sep 09 16:32:35 2014


Enter a number <1000: 405
        You entered Four Hundred and Five
Enter a number <1000: 77
        You entered Seventy Seven
Enter a number <1000: 129
        You entered One Hundred Twenty Nine
Enter a number <1000: 350
        You entered Three Hundred Fifty
Enter a number <1000: 911
        You entered Nine Hundred Eleven
Press any key to continue . . .
=================================================================================================*/
