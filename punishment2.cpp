#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cout << "Enter The number of lines for the punishment:"; //prompt user
	int x,y; // declare variables of type int
	cin >> x; //get number of lines from user
	if (x < 0) //basic check of x's validity
	{
		cout << "You entered an incorrect value for the number of lines!" <<endl;
		return 1;//exit program if incorrect value
	}
	cout << "Enter the line for which we want to make a typo: ";//prompt user
	cin >> y;// get typo line number
	if (y < 0 || y > x) //basic validity check for line number typo
        {
                cout << "You entered an incorrect value for the line typo!" <<endl;
                return 1; //exit if  invalid
        }
	
	for( int i = 0; i < x; i++) // loop to print out repetitive message.
	{
		if (i == y)//check if line should have typo
		{
			cout << "I will always use object oriented programing" << endl;
		}
		else//otherwise print correctly
		{
			cout << "I will always use object oriented programming" << endl;
		}
	} 
	return 1;//exit program
	
}
