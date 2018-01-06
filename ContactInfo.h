// ContactInfo.h

#pragma once

#include<iostream>
#include<string>


using namespace std;

class ContactInfo {

public:

	ContactInfo(); // Default Constructor
	ContactInfo(string, string);
	// ContactInfo(char, char); // Parameter Constructor
	~ContactInfo(); // Destructor

	//Setter
	// void setName(char *n);
	// void setPhone(char *p);

	void setName(string aName);
	void setPhone(string aPhone);

	//Getter
	// const char *getName() const;
	// const char *getPhoneNumber() const;

	string getName() const;
	string getPhone() const;

	friend ostream & operator << (ostream & out, const ContactInfo & aContactInfo);
	friend istream & operator >> (istream & in, ContactInfo & aContactInfo);

private:

	// char *name;
	// char *phone;

	string name;
	string phone;
};