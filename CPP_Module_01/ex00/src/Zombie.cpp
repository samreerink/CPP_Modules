#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string newZombieName) {
	name = newZombieName;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
