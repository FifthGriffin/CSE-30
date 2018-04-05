#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int checkArraySort(int a[], int array_max,int first, int last)
{
	if( last >= array_max)
	{
		return -20;
	}
	if( last < first)
        {
                return -10;
        }
        bool check = true;
        for(int i = first; i < last; i++) //check for ascending order
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
        for(int i = first; i < last; i++) //check for descending order
        {
                if(i > 0)
                {
			cout  << "current index: " << a[i] << endl;
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
int main()
{
	const int array_max = 20; //int to make an array of constant size
	int arr[array_max]; //array of constant size
	cout << "Enter beginning position to check: ";
	int oposition; //oposition for output position
	cin >> oposition;
	cout << "Enter ending position to check:";
	int eposition; //eposition for end position
	cin >> eposition;
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
	}
	int check = checkArraySort( arr, array_max, oposition, eposition);
	if( check == -20  || check == -10)
	{
		cout << "You are trying to check an invalid range of array elements!" << endl;
		return 1;
	}
	else if(check == -1)
	{
		cout << "The portion of the array is sorted in descending order!" << endl;
		return 1;
	}
	else if(check == 0)
	{
		cout << "The portion of the array is not sorted!" << endl;
		return 1;
	}
	else if(check == 1)
	{
		cout << "The portion of the array is in ascending order!" << endl;
		return 1;
	}
	return 1;
}
