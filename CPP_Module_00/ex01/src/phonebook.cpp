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
			  << "Nickname  \n"
			  << "-------------------------------------------------" << std::endl;
	for (int i = 0; i < std::min(count, 8); i++) {
		contacts[i].displayShort(i);
	}
	int index;
	std::cout << "Enter Index: ";
	std::cin >> index;
	if (index >= 0 && index < std::min(count, 8))
		contacts[index].displayFull();
	else
		std::cout << "Index is invalid";
	std::cout << std::endl;
}
