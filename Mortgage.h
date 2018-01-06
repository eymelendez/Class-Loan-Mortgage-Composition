// Mortgage.h

#pragma once

#include<iostream>
#include<iomanip>

using namespace std;

class Mortgage {

public:

	//Contructores
	Mortgage();
	Mortgage(const Mortgage & aMortgage);
	~Mortgage();

	//Setters
	void setRate(double);
	void setLoan(double);
	void setYears(int);

	//Getters
	double getRate() const;
	double getLoan() const;
	int getYears() const;

	//Methods
	double getPayment() const;
	double getTerm() const;
	double getTotal() const;

	friend ostream & operator << (ostream &output, const Mortgage & aMortgage);
	friend istream & operator >> (istream &input, Mortgage & aMortgage);

private:

	double rate;
	double loan;
	int years;

};