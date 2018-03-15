#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter your name: ";
	string Name;
	getline(cin, Name);
	cout << "Welcome to CSE30, " << Name << endl;
	return 1; 
}
