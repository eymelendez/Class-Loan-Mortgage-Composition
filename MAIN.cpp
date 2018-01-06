// MAIN.cpp

/*ISSUES: It appears it does take the numbers and display them correctly but the final calculation does not work proper. Maybe it has something to do with the
		  LoanArray.cpp or Loan.cpp*/

#include<iostream>

using namespace std;

#include"Mortgage.h"
#include"Loan.h"
#include"LoanArray.h"

int main() {

	LoanArray loans;
	int choice;

	cin >> loans;

	do {
		cout << "\t\tMenu\n";
		cout << "1. Display list of the loans.\n";
		cout << "2. Add a loan.\n";
		cout << "3. Delete a Loan.\n";
		cout << "4. Exit.\n";
		cin >> choice;

		switch (choice) {

		case 1:

			if (loans.isEmpty() == true)
			{
				cout << "Database is empty, enter a loan information first..." << endl;
			}
			else {
				cout << loans;
			}
			
			break;

		case 2:

			++loans;
			break;

		case 3:

			if (loans.isEmpty() == true)
				--loans;
			else {
				cout << loans;
				--loans;
			}

			break;

		case 4:

			cout << "Closing program..." << endl;
			break;

		default:

			cout << "Your selection was invalid. Please try again.";
			cin >> choice;
			break;
		}
	} while (choice != 4);

	system("pause");

	return 0;

} // end main. 15 de abril de 2017 - Successful!

/*Output:

*/