#include "../includes/Phonebook.hpp"
#include <iostream>
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
	if (count == 0) {
		std::cout << "Phonebook contains no contacts" << std::endl;
		return ;
	}
	for (int i = 0; i < std::min(count, 8); i++) {
		contacts[i].displayShort(i);
	}
	std::string input;
	int index;
	std::cout << "Enter Index: ";
	std::getline(std::cin, input);
	if (input.length() == 1 && std::isdigit(input[0])) {
		index = std::stoi(input);
		if (index >= 0 && index < std::min(count, 8)) {
			contacts[index].displayFull();
		}
		else
			std::cout << "Index is invalid" << std::endl;
	}
	else
		std::cout << "Index is invalid" << std::endl;
}
