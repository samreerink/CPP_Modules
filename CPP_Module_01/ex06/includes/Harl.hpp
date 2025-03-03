#include <string>

class Harl {
	private:
		void (Harl::*f[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
		std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		void complain(std::string level);
};
