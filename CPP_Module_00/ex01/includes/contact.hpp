#include <string>

class Contact {
	private:
		std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
		std::string	truncate(std::string str);
	public:
		void		setContactInfo();
		void		displayShort(int i);
		void		displayFull();
};
