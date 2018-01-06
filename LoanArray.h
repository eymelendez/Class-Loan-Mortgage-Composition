// LoanArray.h

#pragma once

#include<iostream>

using namespace std;

#include"Loan.h"

class LoanArray : public Loan 
{

public:

	//Constructores
	LoanArray();
	LoanArray(const Loan & aLoan); // Parameter Constructor
	LoanArray(const LoanArray & aLoanArray); // Copy Constructor
	~LoanArray(); // Destructor

	// Setters
	void setLoan(const Loan & aLoan);

	// Getter
	Loan getLoan(int idx);

	// Method
	bool isEmpty() const;

	//Operators
	Loan operator [] (int idx);
	void operator ++ ();
	void operator -- ();

	friend ostream & operator << (ostream & out, const LoanArray & aLoanArray); // Prints
	friend istream & operator >> (istream & in, LoanArray & aLoanArray); // Inputs

private:

	Loan *loans;
	int total;
};
