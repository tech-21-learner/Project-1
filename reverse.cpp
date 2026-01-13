/*Name: Siddh Patel 
* Date: 15/07/2025
* Purpose: Get the number from the user and filpping the number by using the user defined function named ReverseDigit function.
*          Print the required result of ReverDigit to the console.
*/
#include <iostream>
using namespace std;

int ReverseDigit(int number) // Sub-Funtion hving one parameter "number".
{
    int reversed = 0; // Initilizing 

    int sign = 1;     // Storeing the sign
    if (number < 0) // checking for negative numbers.
    {
        sign = -1;
        number = -number;
    }

    while (number > 0)     // Reverse the whole number using arithmetic
    {
        reversed = reversed * 10 + (number % 10);// Searching last digit by %10 and multiplying it by 10 inorder to set it first.
        number = number / 10; // Removing the last digit.
    }

    return reversed * sign; // Return the reverse number with the sign if negative. 
}

int main()
{
    int number;// Declaring the variable.

    cout << "Enter a number: ";// Prompt to get number from user.

    cin >> number;
    cout << endl;

    ReverseDigit(number);// Calling the function.

    cout << ReverseDigit(number);// Print the reverse number.

    return 0;
}
