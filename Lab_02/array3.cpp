#include <iostream>
using namespace std;

int main()
{
	int DArraySize; //declare variable for array size
	cout << "Enter the size of a 2D array: ";
	cin >> DArraySize; //array size input
	if( DArraySize <= 0)//validate size
	{
		cout << "ERROR: You Entered an incorrect value for the array size!" << endl;
		return 1;
	}
	if( DArraySize > 10)//validate size
        {
                cout << " ERROR:Your array is too large! Enter 1 to 10" << endl;
                return 1;
        }


	int DArray[DArraySize][DArraySize];//declare 2d array
	for(int i = 0; i < DArraySize; i++)//loop to fill 2d array
	{
		cout << "Enter the values in the array for row " << i <<", separated by a space, and press enter: ";
		for(int j = 0; j < DArraySize; j++)
		{
			cin >> DArray[i][j];
		}
	}
	cout << "\n";// go to next line
	int negatives = 0; //initialize new variable to track amount of negatives
	for(int i = 0;i<DArraySize; i++)// loop to count negatives
        {
                for(int j=0;j<DArraySize;j++)
                {
			if( DArray[i][j] < 0)
			{
				negatives++;
            		}
		}
        }
	if( !negatives) //checks that there are no negatives
	{
		cout << "All values are non-negative!" << endl;
	}
	else
	{
		cout << "There are " << negatives << " negative values!" << endl;
	}
	//code below for testing purposes
/*	for(int i = 0;i<DArraySize; i++)
	{
		for(int j=0;j<DArraySize;j++)
		{
			cout << DArray[i][j] << " " ;
		}
		cout << "\n";
	}*/
	return 1;
}
