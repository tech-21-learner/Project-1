/* Name: Siddh Patel
*  Date: 16/07/2025
*  Purpose: Checking if the given string is a palindrome or not by user defined function IsPalindrome.
*           IsPalindrome takes three parameters, the character array which is user input,the first index and the last index.
*           Sub-Function returns true or false. 
*/
#include <iostream>
#include <cstring> // including the library for checking the length of string array.
using namespace std;

bool IsPalindrome(char Items[], int first, int last); // Sub-Function prototype.
 
int main() 
{
    const int size = 100; // set size of string as constant.
    char input[size];    // declaring array of character.

    cout << "Enter a string: ";// prompt the user to enter a string.
    cin >> input;

    int length = strlen(input);//inline function strlen is used to get the length of string 

    if (IsPalindrome(input, 0, length - 1)) //calling the function and prints the result accordingly.
    {
        cout << "This is a Palindrome." << endl;
    }
    else {
        cout << "This is not a Palindrome." << endl;
    }

    return 0;// programe ends.
}

bool IsPalindrome(char Items[], int first, int last) // Sub-Function to check the palindrome which returns true or false.
{
    while (first < last) // loop to check each character in a string.
    {
        if (Items[first] != Items[last])// checking if last character is same a first character.
        {
            return false;// returns false if not same character.
        }
        first++;// increament the first index and pointer moves towards right.
        last--;// decreament the last index and pointer moves towards left. 
    }
    return true;// retrns true if palindrome.
}