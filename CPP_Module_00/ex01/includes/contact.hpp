#include <string>

class Contact {
	private:
		std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	public:
		void		setContactInfo();
		void		displayShort(int i);
		void		displayFull();
		std::string	truncate(std::string str);
};
