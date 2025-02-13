#include "../includes/phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : count(0) {}

void PhoneBook::addContact() {
	contacts[count % 8].setContactInfo();
	count++;
}

void PhoneBook::searchContacts() {
	std::cout << "Index     " << " | "
			  << "First name" << " | "
			  << "Last name " << " | "
			  << "Nickname  " << std::endl;
}
