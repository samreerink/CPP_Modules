#include "../includes/Harl.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "./harlFilter: expects one argument: <level>" << std::endl;
		return 1;
	}
	Harl HarlFilter;
	HarlFilter.complain(argv[1]);
	return 0;
}
