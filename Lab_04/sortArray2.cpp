#include <iostream>
using namespace std;

void sortArr(bool desc,int arr[], int size)
{
	int temp, j;
	if(!desc)
	{
		for(int i = 1; i < size; i++)
		{
			temp = arr[i];
			j = i;
			while( j > 0 && arr[j-1] > temp) //continually replaces indices as long as the previous index is greater than the current one, if lower it breaks and then sets the lowest index it can reach
			{
				arr[j] = arr[j-1]; 
				j = (j - 1);
			}
			arr[j] = temp;
		}
	}
	else
	{
	       for(int i = 1; i < size; i++)
                {
                        temp = arr[i];
                        j = i;
                        while( j > 0 && arr[j-1] < temp) //does the same as the loop above but only if the number is lower and then sets highest index it can hit
                        {
                                arr[j] = arr[j-1];
                                j = (j - 1);
                        }
                        arr[j] = temp;
                }
	}
}

int main()
{
	cout << "Enter the size of the array: ";
	int size;
	cin >> size;
	if( size < 1)
	{
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
		return 1;
	}
        int arr[size];
	cout << "Enter the numbers in the array separated by a space, and press enter: ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	} 
	cout << "Sort in ascending(0) or descending(1) order? ";
	bool desc;
	cin >> desc;
	sortArr(desc, arr, size);
	cout << "This is the array in descending order: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 1;
}
