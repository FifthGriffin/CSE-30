#include <iostream>
using namespace std;

string combineStr(string input, int times)
{
	string combined = "";
	for(int i = 0; i < times; i++)
	{
		combined += input;
	}
	return combined;
}

int main()
{
	int times = 1;
	while( times)
	{
		cout << "Enter a string: ";
		string input;
		cin >> input;
		cout << "Enter a number of times: ";
		cin >> times;
		if(!times)
		{
			return 1;
		}
		string combined = combineStr(input, times);
		cout << "The resulting string is: " << combined << endl;
	}
	return 1;
}
