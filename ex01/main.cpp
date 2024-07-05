// #include "PhoneBook.hpp"
// CLASSES
//Phonebook-
// should have array of contact (8 max)
// tries to add 9th one then it replaces the first one

// Contact-
// 


// COMMANDS
// ADD - saves a new contact
	// add the contact to the phonebook
	// contact fields are : first name, last name, nickname, phone number and darkest secret

//SEARCH - display a specific contact
	// display the save contact as 4 columns: index, first name, last name and nickname
	// each coulmn should be 10 char. a pipe separates them. right-aliged. if text more
	// than 10 char, it must truncated and the last diplayed character must be replaced
	// by a dot.

//EXIT - the program quits and the contacts are gone.

// any other command wont work.
#include "PhoneBook.hpp"

int	PhoneBook::add()
{
	Contact		list;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	DarkestSecret;
	int			PhoneNumber;

	std::cout << "Enter the First name: ";
	std::cin >> FirstName;
	if (std::cin.eof() || FirstName == "EXIT")
		return (1);
	list.SetFirstName(FirstName);
	std::cout << "\033[0;35mFirst Name set to: \033[0m" << list.GetFirstName() << std::endl;

	std::cout << "Enter the Last name: ";
	std::cin >> LastName;
	if (std::cin.eof() || LastName == "EXIT")
		return (1);
	list.SetLastName(LastName);
	std::cout << "\033[0;35mLast Name set to: \033[0m" << list.GetLastName() << std::endl;

	std::cout << "Enter the Nickname: ";
	std::cin >> NickName;
	if (std::cin.eof() || NickName == "EXIT")
		return (1);
	list.SetNickName(NickName);
	std::cout << "\033[0;35mNickName set to: \033[0m" << list.GetNickName() << std::endl;

	std::cout << "Enter the PhoneNumber: ";
	std::cin >> PhoneNumber;
	if (list.SetPhoneNumber(PhoneNumber))
        std::cout << "\033[0;35mPhone Number set to: \033[0m" << list.GetPhoneNumber() << std::endl;
    else
        return (std::cout << "Invalid phone number. Please enter only digits." << std::endl, 1);

	std::cout << "Enter the DarkestSecret: ";
	std::cin >> DarkestSecret;
	if (std::cin.eof() || DarkestSecret == "EXIT")
		return (1);
	list.SetDarkestSecret(DarkestSecret);
	std::cout << "\033[0;35mDarkestSecret set to: \033[0m" << list.GetDarkestSecret() << std::endl;
	return (0);
}
// void	DisplaySearch()
// {
	
// }
void	PhoneBook::search(std::string word)
{
	int i = -1;
	std::cout << "Enter the index of the contact you want to view: ";
	std::cin >> word;
	while (word[++i])
	{
		if (!isdigit(word[i]))
		{
			std::cout << "\033[0;31mShould be the index value\033[0;0m" << std::endl;
			break ;
		}
		if (word[i] <= '0' || word[i] >= '7')
		{
			std::cout << "\033[0;31mShould be within 0 to 7 index\033[0;0m" << std::endl;
			break ;
		}
	}
	// DisplaySearch();
}

int main()
{
	std::string word;
	PhoneBook lst;
	int i = 0;

	while(1)
	{
		if (word == "EXIT" || std::cin.eof())
			break ;
		std::cout << "\033[0;34menter your command: \033[0m";
		std::cin >> word;
		if (word == "EXIT" || std::cin.eof())
			break ;
		else if (word == "ADD")
		{
			if (i++ < 8)
			{
				if (lst.add() == 1)
					break ;
			}
			else
				std::cout << "\033[0;37mREPLACE THE VALUES \033[0m" << std::endl;
			// 	replace first with the new added contact
		}
		else if (word == "SEARCH")
			lst.search(word);
		else
			std::cout << "\033[0;31mchoose ADD, SEARCH and EXIT only\033[0m" << std::endl;
	}
}
