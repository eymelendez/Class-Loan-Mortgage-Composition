# Class-Loan-Mortgage-Composition

NOTE TO VIEWERS: This was the original exersice that we had to work with. For course purposes, the profesor assigned this exercise to be used in composition of classes.

C++ Design a class named Loan that will determine the monthly payment on a home mortgage. The monthly payment
with interest compounded monthly can be calculated as follows:

Payment = (Loan * (Rate / 12) * Term) / (Term – 1)

Where Term = (1 + Rate / 12) ^ (12 * Years)

Payment = the monthly payment

Loan = the dollar amount of the loan

Rate = the annual interest rate

Years = the number of years of the loan

The class must have the following member variables and member functions:

Your class should have the following private member variables:

double amount, rate, years

Your class should have the following public member functions:

Default Constructor

Zero’s out all member variables

2nd Constructor

Accepts values for the amount, rate and number of years and writes them into the appropriate member variables.

void setAmount (double a);

void setRate (double r);

void setYears (double y);

Sets the values of the member variables.

double getAmount () const;

double getRate () const;

double getYears () const;

Retrieves the values of the member variables.

double getPayment ()const;

Calculate and return the monthly payment amount.

double getTotalPaid ()const;

Calculate and return the total amount paid to the bank at the end of the loan period.

Demonstrate the class in a program that thoroughly tests all public member functions. Get the necessary data
from user input. Use the appropriate constructor based on user input. Output monthly payment amount and 
total amount paid to the bank at the end of the loan.

Write your class and program.

Save your class description in a file named Loan.h. Save your class member variables in a file named Loan.cpp
