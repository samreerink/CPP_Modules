#include "../includes/Phonebook.hpp"
#include <iostream>

int main() {
	PhoneBook	myPhone;
	std::string	input;

	std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			myPhone.addContact();
		else if (input == "SEARCH")
			myPhone.searchContacts();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Command is invalid" << std::endl;
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
	}
	if (std::cin.eof()) {
		std::cerr << "\n./phonebook: Exit due closed input stream" << std::endl;
		return 1;
	}
	return 0;
}
