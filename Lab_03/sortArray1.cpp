#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the size of the array: ";
	int  arrS;// arrS == size of the array
	cin >> arrS;
	if( arrS < 1) //validate array size
	{
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
		return 1; //exit if invalid
	}
	cout << "Enter the numbers in the array, separated by a space, and press enter: ";
	int arr[arrS];// initialize array the size of arrS
	for (int i = 0; i < arrS; i++)// input array index by index
	{
		cin >> arr[i];
	}
	int min, temp, counter = 0;//declare 3 variables, initialize counter at 0
	for(int i = 0; i < arrS; i++)// Selection sort algorithm
	{
		min = i;//set min to current position
		for(int j = i+1; j < arrS; j++)//check further indices
		{
			if( arr[j] < arr[min])
			{
				min = j;//replace min if applicable
			}
		}
		if(arr[min] != arr[i])// check if swap is necessary
		{
			temp = arr[i];//this and the next two lines swap the values at the indices
			arr[i] = arr[min];
			arr[min] = temp;
	                counter++; //increment counter
		}
	}
        cout << "This is the sorted array in ascending order: " ;
	for (int i = 0; i < arrS; i++)//display sorted array
	{
		cout << arr[i] << " " ;
	}
	cout << "\n";
	cout << "The algorithm selected the minimum for the traverse of the array." << endl;
	cout << "It took " << counter << " swaps to sort the array..." << endl;
	return 1;
}
