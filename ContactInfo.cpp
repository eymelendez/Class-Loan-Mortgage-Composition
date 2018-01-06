// ContactInfo.cpp

#include <iostream>
#include <cstring>
#include<iomanip>

using namespace std;

#include "ContactInfo.h"

//Contructores
ContactInfo::ContactInfo() {

	// name = NULL;
	// phone = NULL;
	
	name = " ";
	phone = " ";
}

ContactInfo::ContactInfo(string aName, string aPhone)
{
	name = aName;
	phone = aPhone;
}

/*ContactInfo::ContactInfo(char n, char p) {

    name = new char[n];
	phone = new char[p];
	
}*/

ContactInfo::~ContactInfo() {

	// delete[] name;
	// delete[] phone;

	// cout << "Destroying Objects...";
}

// Setters
void ContactInfo::setName(string aName)
{
	name = aName;
}

void ContactInfo::setPhone(string aPhone)
{
	phone = aPhone;
}

/*void ContactInfo::setName(char *n) {

	int len = strlen(n) + 1;
	this->name = new char[len];
	strcpy_s(name, len, n);

}

void ContactInfo::setPhone(char *p) {

	int len = strlen(p) + 1;
	phone = new char[len];
	strcpy_s(phone, len, p);
}*/

// Getters

string ContactInfo::getName() const
{
	return name;
}

string ContactInfo::getPhone() const
{
	return phone;
}

/*const char* ContactInfo::getName() const {

return name;
}*/

/*const char* ContactInfo::getPhoneNumber() const {

	return phone;
}*/


// Output Operators
ostream & operator << (ostream & output, const ContactInfo & aContactInfo)
{
	
	output << "\t" << aContactInfo.getName() << "\t" << aContactInfo.getPhone(); // << setw(10);
	return output;
}

istream & operator >> (istream & input, ContactInfo & aContactInfo)
{

	string aName, aPhone;

	cout << "Enter the name of the client: ";
	getline(input >> ws, aName);

	aContactInfo.setName(aName);

	cout << "Enter the phone of the client: ";
	getline(input >> ws, aPhone);

	aContactInfo.setPhone(aPhone);

	return input;
}
