// Loan.h

#pragma once

#include<iostream>

using namespace std;

#include"ContactInfo.h"
#include"Mortgage.h"

class Loan : public Mortgage, ContactInfo 
{

public:

	//Constructores
	Loan();
	Loan(ContactInfo, Mortgage);
	Loan(Loan & aLoan);
	~Loan();

	//Setters
	void setClient(ContactInfo);
	void setLoan(Mortgage);

	//Getters
	ContactInfo getClient() const;
	Mortgage getLoan() const;

	friend ostream & operator << (ostream &output, const Loan & aLoan);
	friend istream & operator >> (istream &input, Loan & aLoan);

private:

	ContactInfo client;
	Mortgage loan;
};


