#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "Memory address of string variable  : " << &str << '\n';
	std::cout << "Memory address held by stringPTR   : " << stringPTR << '\n';
	std::cout << "Memory address held by stringREF   : " << &stringREF << '\n';
	std::cout << "Value of string variable           : " << str << '\n';
	std::cout << "Value pointed to by stringPTR      : " << *stringPTR << '\n';
	std::cout << "Value pointed to by stringREF      : " << stringREF << '\n';
	return 0;
}
