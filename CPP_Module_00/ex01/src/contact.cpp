#include "../includes/contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void Contact::setContactInfo() {
			std::cout << "First name: ";
			std::getline(std::cin, firstName);
			std::cout << "Last name: ";
			std::getline(std::cin, lastName);
			std::cout << "Nickname: ";
			std::getline(std::cin, nickname);
			std::cout << "Phone number: ";
			std::getline(std::cin, phoneNumber);
			std::cout << "Darkest secret: ";
			std::getline(std::cin, darkestSecret);
}

void Contact::displayShort(int i) {
	std::cout << std::setw(10) << i << " | "
			  << std::setw(10) << truncate(firstName) << " | "
			  << std::setw(10) << truncate(lastName) << " | "
			  << std::setw(10) << truncate(nickname) << std::endl;
}

void Contact::displayFull() {
	std::cout << "First name: " << firstName + "\n";
	std::cout << "Last name: " << lastName + "\n";
	std::cout << "Nickname: " << nickname + "\n";
	std::cout << "Phone number: " << phoneNumber + "\n";
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

std::string Contact::truncate(std::string str) {
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return str;
}
