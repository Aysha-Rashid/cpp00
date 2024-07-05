#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <stdio.h>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        int	PhoneBook::add();
        void	PhoneBook::search(std::string word);
        void    DisplaySearch();
};

#endif // PHONEBOOK_HPP