
#include <iostream>
using namespace std;


void decToOctal(int n)
{

	// array to store octal number
	int octalNum[100];

	// counter for octal number array
	int i = 0;
	while (n != 0) {

		// storing remainder in octal array
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}

	// printing octal number array in reverse order
	for (int j = i - 1; j >= 0; j--)
		cout << octalNum[j];
}

// Driver Code
int main()
{
	int n = 127;

	// Function Call
	decToOctal(n);

	return 0;
}
//Solution: Divide 127 by 8

//127 ÷ 8= 15(Quotient) and (7)Remainder

//Divide 15 by 8 again.

//15 ÷ 8 = 1(Quotient) and (7) Remainder

//Divide 1 by 8, we get;

//1 ÷ 8 = 0(Quotient) and (1) Remainder

//Since the quotient is zero now, no more division can be done. So by taking the remainders in reverse order, we get the equivalent octal number.

//Hence, (127)10 = (177)8
