#include <iostream>
#include <iomanip>
#include <string>

class Contact {
	private:
		std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	public:
		void setContactInfo();
		void displayFull();
};
