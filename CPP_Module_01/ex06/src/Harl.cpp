#include "../includes/Harl.hpp"
#include <iostream>

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Harl::info(void) {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level) {
	int i;

	for (i = 0; i < 4; i++) {
		if (levels[i] == level) break;
	}

	switch (i) {
		case 0: (this->*f[0])(); [[fallthrough]];
		case 1: (this->*f[1])(); [[fallthrough]];
		case 2: (this->*f[2])(); [[fallthrough]];
		case 3: (this->*f[3])(); break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
