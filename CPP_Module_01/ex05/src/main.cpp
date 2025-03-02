#include "../includes/Harl.hpp"
#include <iostream>

int main() {
	Harl test;

	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
	std::cout << '\n';
	test.complain("YOOOOOO");
	test.complain("debug");
	test.complain("DEBUG ");
	test.complain("sdfjh4378yf4uhf34jh");
//	test.complain("\n");
	test.complain(" ");
	test.complain("");
	return 0;
}
