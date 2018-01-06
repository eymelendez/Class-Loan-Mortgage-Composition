// Mortgage.cpp

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#include "Mortgage.h"

Mortgage::Mortgage() {

	rate = 0.0;
	loan = 0.0;
	years = 0;
}

Mortgage::Mortgage(const Mortgage & aMortgage) {

	setRate(aMortgage.rate);
	setLoan(aMortgage.loan);
	setYears(aMortgage.years);
}

Mortgage::~Mortgage()
{
	// cout << "Destroying Objects..." << endl;
}

void Mortgage::setRate(double r) {
	
	rate = r;
}

void Mortgage::setLoan(double l) {
	
	if (l < 0) {
		cout << "Loan must be a positive value. ";

		exit(0);
	}
	else
		loan = l;
}

void Mortgage::setYears(int y) {

	years = y;
}

double Mortgage::getPayment() const {

	double payment;

	payment = ((loan)*(rate / 12)*(getTerm())) / (getTerm() - 1);

	return payment;
}

double Mortgage::getRate() const {

	return rate;
}

double Mortgage::getLoan() const {

	return loan;
}

int Mortgage::getYears() const {

	return years;
}

double Mortgage::getTerm() const {

	double Term, x, b;

	x = (1 + (rate / 12));
	b = 12 * years;

	Term = pow(x, b);

	return Term;
}

double Mortgage::getTotal() const
{
	return 0.0;
}

ostream & operator << (ostream &output, const Mortgage & aMortgage) {

	output << fixed << setprecision(2);
	//out << setiosflags(ios::left);

	output << "\t" << "$" << aMortgage.loan << "\t  " << setprecision(0) << aMortgage.rate * 100 << "%" 
		<< "\t\t  " << aMortgage.years << "\t\t\t$" << aMortgage.getPayment() << "\t\t\t\t\t$" 
		<< aMortgage.getTotal() << endl;

	return output;
}

istream & operator >> (istream &input, Mortgage & aMortgage) {

	cout << "Enter the dollar amount of the loan: $";
	input >> aMortgage.loan;

	cout << "Enter the annual interest rate: ";
	input >> aMortgage.rate;

	cout << "Enter the number of years of the loan: ";
	input >> aMortgage.years;

	return input;
}


