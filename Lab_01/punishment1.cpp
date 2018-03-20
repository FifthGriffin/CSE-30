#include <iostream>
#include <string>
#include <sstream>
using namespace std;
//overcomplicated means to get a user to provide a number that controls how many lines are to be printed, program doesn't account for 
//non-alphanumeric repsonses but doesn't break when they are input.
int main()
{
	cout << "Enter the number of lines for the punishment: ";//prompt the user
	string x; //declare variable for input
	getline(cin,x); //give x a value
	int y = -2; //declare variable for amount of lines
	stringstream(x) >> y;
	//cout << y <<endl;
	if(y < 0) //verify posibility of printing y times 
	{
		cout << "You entered an incorrect value for the number of lines!" <<endl;
		return 1;
	}
	for(int i = 0; i < y ; i++)//loop that displays selected message as many times as desired.
	{
		cout << "I will always use object oriented programming." << endl;//selected message
	}
	return 1;
}
