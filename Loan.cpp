// Loan.cpp

#include<iostream>
#include<iomanip>

using namespace std;

#include "Loan.h"

// Constructor
Loan::Loan() : Mortgage(), ContactInfo() 
{
}

// Parameter Constructor
Loan::Loan(ContactInfo c, Mortgage l) 
{

	setClient(c);
	setLoan(l);
}

// Copy Constructor
Loan::Loan(Loan & aLoan) 
{

	setClient(aLoan.client);
	setLoan(aLoan.loan);

}

// Destructor
Loan::~Loan()
{
	// cout << "Destroying Objects..." << endl;
}

void Loan::setClient(ContactInfo aClient) {

	this->client = aClient;

}

void Loan::setLoan(Mortgage loa) {

	this->loan = loa;

}

ContactInfo Loan::getClient() const {

	return this->client;
}

Mortgage Loan::getLoan() const {

	return loan;
}

ostream & operator << (ostream & output, const Loan & aLoan) 
{

	output << fixed << showpoint << setprecision(2);

	output << aLoan.client;
	output << aLoan.loan;

	// output << "Monthly paymente: $" << aLoan.loan.getPayment() << endl;

	return output;

}

istream & operator >> (istream &input, Loan & aLoan) {

	double l, r;
	string n, p;
	int y;
	// char n[30], p[30];

	cin.ignore();
	cout << "Enter name: ";
	getline(input >> ws, n);
	aLoan.client.setName(n);

	cout << "Enter phone: ";
	getline(input >> ws, p);
	aLoan.client.setPhone(p);

	cout << "Enter the dollar amount of the loan: ";
	input >> l;
	aLoan.loan.setLoan(l);

	cout << "Enter the annual interest rate: (i.e If interest is 12%, enter .12)";
	input >> r;
	aLoan.loan.setRate(r);

	cout << "Enter the number of years of the loan: ";
	input >> y;
	aLoan.loan.setYears(y);

	return input;

}