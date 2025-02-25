#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string newZombieName);
		~Zombie();
		void setZombieName(std::string name);
		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);
