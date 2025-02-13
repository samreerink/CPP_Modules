#include "../includes/phonebook.hpp"
#include <iostream>

int main() {
	PhoneBook	myPhone;
	std::string	input;

	while (input != "EXIT")
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, input);
		if (input == "ADD")
			myPhone.addContact();
		else if (input == "SEARCH")
			myPhone.searchContacts();
		else if (input != "EXIT")
			std::cout << "Command is invalid" << std::endl;
	}
	return 0;
}
