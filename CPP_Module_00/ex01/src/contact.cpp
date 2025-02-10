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
