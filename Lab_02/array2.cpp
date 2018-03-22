#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cout << "Enter the string to reverse: ";//prompt user
	string uString;// declare variable for input
	cin >> uString;//receive input
	cout << "The reverse of the string is: ";
	for (int i = uString.length(); i >= 0; i--)//display string in reverse
	{
		cout << uString[i];
	}
	cout << "\n";//end the line cleanly
	return 1;//exit program
}
