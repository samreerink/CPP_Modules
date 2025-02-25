#include "../includes/Zombie.hpp"
#include <stdlib.h>

int	main() {

	Zombie* Horde;
	int n_zombies = 5;
	Horde = zombieHorde(n_zombies, "Sam");
	for (int i = 0; i < n_zombies; i++) {
		Horde[i].announce();
	}
	delete[] Horde;
	return 0;
}
