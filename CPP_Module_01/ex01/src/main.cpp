#include "../includes/Zombie.hpp"

int	main() {
	int n_zombies = 5;
	Zombie* Horde = zombieHorde(n_zombies, "Sam");
	if (!Horde)
		return 1;
	for (int i = 0; i < n_zombies; i++) {
		Horde[i].announce();
	}
	delete[] Horde;
	return 0;
}
