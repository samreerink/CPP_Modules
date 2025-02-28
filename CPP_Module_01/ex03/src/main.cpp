#include "../includes/HumanB.hpp"

int main() {
	// Subject test
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
	}
	HumanB sam("Sam");
	Weapon w("Manatee");
	sam.attack();
	sam.setWeapon(w);
	sam.attack();
	w.setType("Bazooka");
	sam.attack();
	return 0;
}
