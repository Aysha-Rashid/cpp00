#include "PhoneBook.hpp"

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		int	PhoneNumber;
		std::string DarkestSecret;
	public:
		void		SetFirstName(std::string First); // setter
		std::string GetFirstName(); // getter
		void		SetLastName(std::string Last);
		std::string GetLastName();
		int			SetPhoneNumber(int Number);
		int			GetPhoneNumber();
		void		SetNickName(std::string NickName);
		std::string GetNickName();
		void		SetDarkestSecret(std::string Secret);
		std::string GetDarkestSecret();
		// Constructs an empty string, with a length of zero characters.
		// void	contact();
		// void	~contact();
};
