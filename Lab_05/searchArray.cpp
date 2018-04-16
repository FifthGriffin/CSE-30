#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int checkArraySort(int a[], int array_max)
{
        bool check = true;
        for(int i = 0; i < array_max; i++) //check for ascending order
        {
                if(i > 0)
                {
                        if(a[i] < a[i-1]) //if not ascending 
                        {
                                check = false;//show not ascending
                                break;
                        }
                }
        }
        if(check)
        {
                return 1;
        }
	check = true;
        for(int i = 0; i < array_max; i++) //check for descending order
        {
                if(i > 0)
                {
//			cout  << "current index: " << a[i] << endl;
                        if(a[i] > a[i-1]) //if not ascending 
                        {
                                check = false;//show not ascending 
                                break;
                        }
                }
        }
        if(check)
        {
                return -1;
        }
	else 
	{
		return 0;
	}
}

int binarySearch(int arr[], int first, int last, int k)
{
	int mid = first + ( last - first)/2;
	cout << mid << endl;
	cout << "this is last value : " << last << endl;
	if( arr[mid] == k)
	{
		return mid;
	}
	if( arr[mid] > k)
	{
	        cout << "we made it here!1" << endl;
		if( arr[0] < arr[1])
		{
			binarySearch(arr, first, mid, k);
		}
		else
		{
			binarySearch(arr, mid, last, k);
		}
	}
	else if( arr[mid] < k)
	{
	       	cout << "we made it here!" << endl;
		if( arr[0] < arr[1])
		{
			binarySearch(arr, mid, last, k);
		}
		else
		{
			binarySearch(arr, first, mid, k);
		}
	}
	else
	{
		cout << "How did you get here?" << endl;
	}
}
int main()
{
	const int array_max = 20;
	int arr[array_max];
	int i = 0; //initialize a counting variable
	string line; //declare a string
	ifstream myfile("in.txt"); //open file
	if (myfile.is_open())	//make sure file was opened
	{
		while ( getline (myfile, line) ) //check if theres another line, if so getline and store it in "line"
		{
			arr[i] = stoi(line); //convert the string to an int and store it in the array
			i++; //increment
		}
		myfile.close(); //close file
	}
	else//show file was not able to be opened
	{
		cout << "Unable to open file." << endl;
		return 1;
	}
	int check = checkArraySort( arr, array_max);
	if( check == 0)
	{
		cout << "The array is not sorted!" << endl;
		return 1;
	}
	cout << "Enter input search key: ";
	int k;
	cin >> k;
	int first = 0;
	int last = array_max;
	int index = binarySearch(arr, first, last, k);
	if( index < 0)
	{
		cout << "The key was not found in the array!" << endl;
		return 1;
	}
	cout  << "Found key at index " << index << "!" << endl;

}


