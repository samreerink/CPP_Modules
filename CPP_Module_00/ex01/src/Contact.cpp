#include "../includes/Contact.hpp"
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
	bool (Contact::*f)(const std::string &str) = &Contact::checkWhitespace;

	if (prompt == "Phone number: ")
		f = &Contact::checkInputPhone;
	std::cout << prompt;
	if (!std::getline(std::cin, input)) {
		std::cerr << "\n./phonebook: Exit due closed input stream" << std::endl;
		exit(1);
	}
	while (input.empty() || !(this->*f)(input)) {
		std::cout << "Contact input rules:\n";
		if (prompt != "Phone number: ") {
			std:: cout << "- Contact details cannot be empty\n" 
					   << "- Only one whitespace between words is allowed" << std::endl;
		} else 
			std::cout << "- Phone number can only contain digits" << std::endl;
		std::cout << prompt;
		if (!std::getline(std::cin, input)) {
			std::cerr << "\n./phonebook: Exit due closed input stream" << std::endl;
			exit(1);
		}
	}
	return (input);
}

bool Contact::checkWhitespace(const std::string &str) {
	size_t i;
	size_t consecutiveWspace = 0;

	if (std::isspace(str[0]))
		return false;
	for (i = 1; i < str.length(); i++) {
		if (isspace(str[i])) {
			consecutiveWspace++;
			if (consecutiveWspace > 1)
				return false;
		} else 
			consecutiveWspace = 0;
	}
	if (std::isspace(str[i - 1]))
		return false;
	return true;
}

bool Contact::checkInputPhone(const std::string &str) {
	if (str[0] != '+' && !std::isdigit(str[0]))
		return false;
	for (size_t i = 1; i < str.length(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

std::string Contact::truncate(std::string str) {
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return str;
}
