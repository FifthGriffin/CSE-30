#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const int array_max = 20; //int to make an array of constant size
	int arr[array_max]; //array of constant size
	cout << "Enter beginning position to output: ";
	int oposition; //oposition for output position
	cin >> oposition;
	cout << "Enter ending position to output:";
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
	ofstream file ("out.txt");//open file to write to
	if (file.is_open())//make sure file is open
	{
		for( i = oposition; i <= eposition; i++)// start at specific index(oposition) and end at another(eposition)
		{
			file << arr[i] << " ";//write array index
		}
		file.close(); //close file
	}
	else //show file was unable to open
	{
                cout << "Unable to open file." << endl;
	}
	return 1;
}
