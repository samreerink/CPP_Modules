#include "../includes/HumanA.hpp"

class HumanB {
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		void attack() const;
};
