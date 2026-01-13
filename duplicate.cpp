/* Name: Siddh Patel
*  Date: 16/07/2025
*  Purpose: Creating a 2D matrix with the help of user input(Rows and Columns).
*           Check for duplicate values which are input by user with the help of user defined function duplicate.
*           Duplicate functin takes three parameters the number of rows, columns and user defined 2D array.   
*/
#include<iostream>
using namespace std;

const unsigned int numRows = 100;// setting rows and columns as costant.
const unsigned int numCols = 100;

void Duplicates(long arr[numRows][numCols],unsigned int row,unsigned int cols);//sub-function prototype 

int main()
{
	long array[numRows][numCols];//declaring 2D array

	unsigned int inputR, inputC;

	cout << "We are supposed to create a 2D array. Please enter the number of rows and columns: ";
	cin >> inputR >> inputC;//prompt users to enter number of rows and columns.
	cout << "Enter the values: " << endl;

	for (int i = 0; i < inputR; i++) // nested for loop to store the data in 2D array.
	{
		for (int j = 0; j < inputC; j++)
		{
			cin >> array[i][j];
		}
	}

	cout << "The 2D array is constructed as follows: " << endl;
	for (int i = 0; i < inputR; i++) // loop to print the required user defined 2D matrix.
	{
		for(int j = 0; j < inputC; j++)
		{
			cout << array[i][j]<<"  ";
		}
		cout << endl;
	}

	Duplicates(array, inputR, inputC);//calling the function.

	
	return 0;// programe ends.

}


void Duplicates(long arr[numRows][numCols],unsigned int row,unsigned int cols)
{
	bool find = false;// initiallizing that there is no duplicate values.
    cout <<"Thank you. ";
	for (int i = 0; i < row; i++)// loop inorder to check the all  numbers in 2D array.
	{
		for (int j = 0; j < cols; j++)
		{
			bool gotNumber = true;//assuming that the current value have duplicate.


			for (int a = 0; a < i; a++)// checking for the same number in previors rows.
			{
				for (int b = 0; b < cols; b++)
				{
					if (arr[a][b] == arr[i][j])// check if both the numbers are equal.
					{
						gotNumber = false;// set gotNumber to false(got number is set true initially), if above condition is true.
					}
				}
			}


			for (int c = 0; c < j; c++)//checking for the same value in the same row of numbers.
			{
				if (arr[i][c] == arr[i][j])
				{
					gotNumber = false;// change gotNumber to false, if condition is true.
				}
			}


			if (gotNumber)// if gotNumber is true count will increase.
			{
				int count = 0;//initializing the count to 0.

				for (int p = 0; p < row;p++)// nested for loop to increament the count if there are duplicate values.
				{
					for (int q = 0;q < cols;q++)
					{
						if (arr[p][q] == arr[i][j])
						{
							count++;// increament the count if there are same value as current number.
						}
					}
				}

				if (count > 1 )// condition to print the duplicate values if there are any.
				{
					cout << arr[i][j] << " appears " << count << " times. " ;//print the required result.
					find = true;// change the find from false to true, because we got duplicate.
				}
			}// done with counting number which are duplicate.


		}
	}// done with checking all the elements in 2D Array.


	if (!find)//condition when find is false. 
	{
		cout << "There are no duplicate elements" << endl;//print the required result. 
	}

}// end of sub-function.