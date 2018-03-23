#include <iostream>

using namespace std;

int main()
{
	int arrayS;
	cout << "Enter the size of the array: ";
	cin >> arrayS;
	if( arrayS < 1)
	{
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
		return 1;
	}
	int array[arrayS];
	cout << "Enter the numbers in the array, separated by a space, and press enter: ";
	for(int i = 0; i < arrayS; i++)
	{
		cin >> array[i];
	}
/*	for(int i = 0; i < arrayS; i++)
	{
		cout << "Index " << i << " holds the value: " << array[i] <<  "\n"; //testing code
	}*/ 
	int find;
	cout << "Enter a number to search for in the array: ";
	cin >> find;
	for( int i = 0; i  < arrayS; i++)
	{
		if(array[i] == find)
		{
			cout << "found value " << find << " at index " << i << " which took " << i+1 << " checks." << endl;
			if(i == 0)
				cout << "We ran onto the best case scenario" << endl;
			if(i == arrayS-1)
				cout << "We ran onto the worst case scenario" << endl;
			return 1;
		}
		if ( i == arrayS-1)
		{
			cout << "The number you entered wasn't in the array! Please enter a valid number." << endl;
			return 1;
		}
	}
}
