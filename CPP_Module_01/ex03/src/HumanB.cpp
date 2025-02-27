#include "../includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name) {}

void HumanB::setWeapon(Weapon& newWeapon) {
	weapon = &newWeapon;
}

void HumanB::attack() const {
	std::cout << name << " attacks with their " << weapon->getType() << '\n';
}
