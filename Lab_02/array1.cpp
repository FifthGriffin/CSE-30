#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the size of the array: ";
	int array_size;
	cin >> array_size;
	if( array_size <= 0)//validate array_size
	{
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
		return 1; //exit program
	}
	int array[array_size];
	cout << "Enter the numbers in the array, separated by a space, and press enter: ";
	bool isIncreasing = true;
	for(int i = 0; i < array_size; i++)
	{
		cin >> array[i];
		if(i > 0)
		{
			if(array[i] < array[i-1])
			{
				isIncreasing =false;
			}
		}
	}
	if(isIncreasing)
	{
		cout << "This IS an increasing array!" << endl;
	}
	else
	{
		cout << "This is NOT an increasing array!" << endl;
	}
	return 1;
}
