#include "contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		count;

	public:
		PhoneBook();
		void addContact();
		void searchContacts();
};
