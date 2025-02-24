#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string newZombieName);
		~Zombie();
		void announce(void);
};
