#include <iostream>
#include "employee.h"
using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn)
    :firstName(first), lastName(last), SocialSecurityNumber(ssn)
{

}
Employee::~Employee() {}
void Employee::setFirstName(const string& first)
{
    firstName = first;
}
std::string Employee::getFirstName() const
{
    return firstName;
}

void Employee::setLastName(const string& last)
{
    lastName = last;
}

std::string Employee::getLastName() const
{
    return lastName;
}
void Employee::setSocialSecurityNumber(const string& ssn)
{
    SocialSecurityNumber = ssn;
}
std::string Employee::getSocialSecurityNumber() const {
    return SocialSecurityNumber;
}
void Employee::print() const {//test
    cout << "Employee: " << getFirstName() << " " << getLastName()
        << "\nSSN: " << getSocialSecurityNumber();
}