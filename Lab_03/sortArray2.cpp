#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the size of the array: ";
	int  arrS;
	cin >> arrS;
	if( arrS < 1)
	{
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
		return 1;
	}
	cout << "Enter the numbers in the array, separated by a space, and press enter: ";
	int arr[arrS];
	for (int i = 0; i < arrS; i++)
	{
		cin >> arr[i];
	}
	int max, temp, counter = 0;
	for(int i = arrS-1; i >= 0; i--)
	{
		max = i;
		for(int j = i-1; j >=0 ; j--)
		{
			if( arr[j] < arr[max])
			{
				max = j;
			}
		}
		if (arr[max] != arr[i])
		{
			temp = arr[i];
			arr[i] = arr[max];
			arr[max] = temp;
			counter++;
		}
	}
        cout << "This is the sorted array in descending order: " ;
	for (int i = 0; i < arrS; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << "\n";
	cout << "The algorithm selected the maximum for the traverse of the array." << endl;
	cout << "It took " << counter << " swaps to sort the array..." << endl;
	return 1;
}
