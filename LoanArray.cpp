// LoanArray.cpp

#include<iostream>
#include<iomanip>

using namespace::std;

#include "LoanArray.h"

//Constructores
LoanArray::LoanArray() : Loan() {

	total = 0;
}

LoanArray::LoanArray(const Loan & aLoan) 
{

	total = 0;
	setLoan(aLoan);
}

LoanArray::LoanArray(const LoanArray & aLoanArray) 
{

	for (int i = 0; i < aLoanArray.total; i++) 
	{
		setLoan(aLoanArray.loans[i]);
	}
}

LoanArray :: ~LoanArray()
{

	delete[] loans;
}

//Setters
void LoanArray::setLoan(const Loan & aLoan)
{

	loans = new Loan;
}

//Getter
Loan LoanArray::getLoan(int idx) 
{

	if (idx >= 0 && idx < total) 
	{
		return loans[idx];
	}

	else 
	{
		cerr << "Index out of bound.";
		exit(1);
	}
}

//Method
bool LoanArray::isEmpty() const {

	bool flag = false;

	if (total == 0)
	{
		flag = true;
	}

	return flag;
}

//Operators
Loan LoanArray :: operator [] (int idx) {

	if (idx >= 0 && idx < total) 
	{
		return loans[idx];
	}
	else 
	{
		cerr << "Index out of bound.";
		exit(1);
	}
}

void LoanArray :: operator ++ () {

	if (isEmpty() == true) 
	{

		loans = new Loan[1];
	}

	else 
	{

		Loan * temp = new  Loan[total];

		for (int i = 0; i < total; i++) 
		{

			temp[i] = loans[i];
		}

		delete[] loans;
		
		loans = new Loan[total + 1];

		for (int i = 0; i < total; i++)
		{

			loans[i] = temp[i];
		}

		delete[] temp;
		
	}

	cin >> loans[total];
	total++;

}

void LoanArray :: operator -- ()
{

	int answer;

	if (total > 0)
	{
		cout << "\nWhich one do you want to delete?";
		cin >> answer;

		if (total == 1)
			delete[] loans;

		else {
			Loan *temp = new Loan[total - 1];
			int i = 0;
			int j = 0;
			int pos = answer - 1;

			while (j < total)
			{
				if (pos == j)
					j++;

				else {
					temp[i] = loans[j];
					j++;
					i++;
				}
			}

			delete[] loans;
			loans = new Loan[total - 1];

			for (int k = 0; k < total - 1; k++) {
				loans[k] = temp[k];
			}

			delete[] temp;
			total--;
		}
	}
	else {
		cout << "The database is already empty..." << endl;
		system("pause");
	}
}

ostream & operator << (ostream & output, const LoanArray & aLoanArray) {

	output << "-----------------------------------------------------------------------------------------------------------------" << endl;
	output << " #\t\t Name \t Phone \t\t Loan \t\t Rate \t\t Years \t\t Monthly Payment \t\t Total Payment" << endl;
	output << "-----------------------------------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < aLoanArray.total; i++) {

		output << i + 1 << ")" << "\t" << aLoanArray.loans[i];
	}
	output << "-----------------------------------------------------------------------------------------------------------------" << endl;
	output << endl;
	return output;
}

istream & operator >> (istream & input, LoanArray & aLoanArray) {

	cout << "How many loans you are going to enter? ";
	input >> aLoanArray.total;

	aLoanArray.loans = new Loan[aLoanArray.total];

	for (int i = 0; i < aLoanArray.total; i++)
	{
		cout << "Loan #" << (i + 1) << endl;
		input >> aLoanArray.loans[i];
	}

	return input;

}