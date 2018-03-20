#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cout << "Enter The number of lines for the punishment:";
	int x,y;
	cin >> x;
	if (x < 0)
	{
		cout << "You entered an incorrect value for the number of lines!" <<endl;
		return 1;
	}
	cout << "Enter the line for which we want to make a typo: ";
	cin >> y;
	if (y < 0 || y > x)
        {
                cout << "You entered an incorrect value for the line typo!" <<endl;
                return 1;
        }
	
	for( int i = 0; i < x; i++)
	{
		if (i == y)
		{
			cout << "I will always use object oriented programing" << endl;
		}
		else
		{
			cout << "I will always use object oriented programming" << endl;
		}
	} 
	return 1;
	
}
