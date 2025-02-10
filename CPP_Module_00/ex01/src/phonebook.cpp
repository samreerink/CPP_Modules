#include "../includes/phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : count(0) {}

void PhoneBook::addContact() {
	contacts[count % 8].setContactInfo();
	count++;
}
