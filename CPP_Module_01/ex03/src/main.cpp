#include "../includes/HumanA.hpp"

int main() {
	Weapon a("sword");
	HumanA sam("Sam", a);
	sam.attack();
	return 0;
}
