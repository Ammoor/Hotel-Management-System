#include "Main_Menu.h"
void Menu()
{
	short choice = 0;
	// "\033[34m" => sets the statement to color blue.
	// "\033[37m"  => reset the rest of the statements to default.
	cout << "\033[34mWelcome to our system!\033[37m\n\n";
	cout << "Please choose one of the following options:\n\n";
	cout << "1. Add a new customer.\n";
	cout << "2. Edit a customer's information.\n";
	cout << "3. Delete a customer.\n";
	cout << "4. Display a customer's information.\n";
	cout << "5. Display all customers' information.\n";
	cout << "6. Exit.\n";
	cout << "Your choice: ";
	A: // A label to return to in case of an invalid input.
	cin >> choice;
	if (cin.fail()) // To check if the user entered a non-numeric value.
	{
		// "\x1B[31m" => sets the statement to color red.
		// "\033[37m"  => reset the rest of the statements to default.
		cout << "\n\x1B[31mInvalid choice! \033[37mPlease enter a valid choice: ";
		cin.clear(); // To clear the error flag in the cin.
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // To clear all the remaining characters in the input buffer.
		goto A; // To return to the label A.
	}
	else // If the user entered a numeric value.
	{
		switch (choice)
		{
		case 1:
			//AddCustomer();
			break;
		case 2:
			//EditCustomer();
			break;
		case 3:
			//DeleteCustomer();
			break;
		case 4:
			//DisplayCustomer();
			break;
		case 5:
			//DisplayAllCustomers();
			break;
		case 6:
			cout << "Thank you for using our system!\n";
			exit(0); // To exit the program.
		default:
			// "\x1B[31m" => sets the statement to color red.
			// "\033[37m"  => reset the rest of the statements to default.
			cout << "\n\x1B[31mInvalid choice! \033[37mPlease enter a valid choice: ";
			goto A; // To return to the label A.
		}
	}
}