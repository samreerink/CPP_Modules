#include "../includes/contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void Contact::setContactInfo() {
			firstName = checkInput("First name: ");
			lastName = checkInput("Last name: ");
			nickname = checkInput("Nickname: ");
			phoneNumber = checkInput("Phone number: ");
			darkestSecret = checkInput("Darkest secret: ");
}

void Contact::displayShort(int i) {
	std::cout << std::setw(10) << i << " | "
			  << std::setw(10) << truncate(firstName) << " | "
			  << std::setw(10) << truncate(lastName) << " | "
			  << std::setw(10) << truncate(nickname) << std::endl;
}

void Contact::displayFull() {
	std::cout << "First name: " << firstName + '\n';
	std::cout << "Last name: " << lastName + '\n';
	std::cout << "Nickname: " << nickname + '\n';
	std::cout << "Phone number: " << phoneNumber + '\n';
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

std::string Contact::checkInput(const std::string &prompt) {
	std::string input;

	std::cout << prompt;
	if (!std::getline(std::cin, input)) {
		std::cerr << "\n./phonebook: Exit due closed input stream" << std::endl;
		exit(1);
	}
	while (input.empty() || strAllWhitespace(input)) {
		std::cout << "Contact details cannot be empty\n";
		std::cout << prompt;
		if (!std::getline(std::cin, input)) {
			std::cerr << "\n./phonebook: Exit due closed input stream" << std::endl;
			exit(1);
		}
	}
	return (input);
}

bool Contact::strAllWhitespace(std::string &str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isspace(str[i])) {
			return false;
		}
	}
	return true;
}

std::string Contact::truncate(std::string str) {
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return str;
}
