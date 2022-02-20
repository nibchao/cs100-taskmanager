#include <iostream>

using namespace std;

int printMainMenu(); // function prototype

int main()
{
	int input = 0;
	do
	{
		input = printMainMenu();
		switch (input)
		{
			case 1:
				// do add task stuff
				cout << "add a task here" << endl << endl;
				break;
			case 2:
				// print task stuff
				cout << "print all tasks here" << endl << endl;
				break;
			case 3:
				// print tasklist stuff
				cout << "print all tasklists here" << endl << endl;
				break;
			case 9:
				cout << "Ending task manager." << endl << endl; 
				break;
			default:
				cout << endl << "Invalid input. Enter any key to return." << endl;
				cin.clear();
				cin.ignore(10000, '\n');
				break;
		}	
	
	}
	while (input != 9);

	return 0;
}

int printMainMenu()
{
	int input = 0;
	cout << "===Task Manager Main Menu===" << endl;
	cout << "1) Add a task" << endl;
	cout << "2) Print all tasks" << endl;
	cout << "3) Print all tasklists" << endl;
	cout << "9) End program" << endl;	


	cout << "Enter menu option: ";
	cin >> input;
	cin.clear();
	cin.ignore(10000, '\n');

	return input;
}
