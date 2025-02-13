#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook {
	private:
		Contact	contacts[8];
		int		count;

	public:
		PhoneBook();
		void addContact();
		void searchContacts();
};
