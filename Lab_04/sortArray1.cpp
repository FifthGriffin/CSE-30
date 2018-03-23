#include <iostream>
using namespace std;

void sort(bool desc, int arr[], int size)
{
	int min, temp;
	if (desc)
	{
		for(int i = size-1; i > 0; i--)// Selection sort algorithm
                {
                        min = i;//set min to current position
                        for(int j = i-1; j >= 0 ; j--)//check further indices
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
                        }
                }

	
	}
	else
	{
		for(int i = 0; i < size; i++)// Selection sort algorithm
		{
			min = i;//set min to current position
			for(int j = i+1; j < size; j++)//check further indices
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
			}
		}
	}
}

int main()
{
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	if( size < 1)
	{
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
		return 1;
	}
	int arr[size];
	cout << "Enter the numbers in the array, separated by a space, and press enter: ";
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	bool descending;
	cout << "Sort in ascending(0) or descending(1) order?";
	cin >> descending;
	sort(descending, arr, size);
	if(descending)
		cout << "This is the sorted array in descending order: ";
	else
		cout << "This is the sorted array in ascending order: ";
	for(int i = 0; i < size; i++)
	{
		cout  << arr[i] << " ";
	}
	cout << "\n";
	return 1;
}
