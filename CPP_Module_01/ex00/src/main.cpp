#include "../includes/Zombie.hpp"

int	main() {
	Zombie* z = newZombie("Pointer");
	randomChump("Sam");
	z->announce();
	delete z;
	return 0;
}
