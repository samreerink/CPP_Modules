#include "../includes/Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name) {
	try {
		Zombie* Horde = new Zombie[N];
		for (int i = 0; i < N; i++) {
			Horde[i].setZombieName(name);
		}
		return Horde;
	} catch (const std::bad_alloc& e) {
		std::cerr << "Memory allocation failed: " << e.what() << std::endl;
		return nullptr;
	}
}
