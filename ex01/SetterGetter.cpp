/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SetterGetter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:30 by ayal-ras          #+#    #+#             */
/*   Updated: 2024/07/05 18:36:06 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::GetFirstName()
{
	return FirstName;
}

void	Contact::SetFirstName(std::string First)
{
	FirstName = First;
}

std::string Contact::GetLastName()
{
	return LastName;
}

void	Contact::SetLastName(std::string Last)
{
	LastName = Last;
}

std::string Contact::GetDarkestSecret()
{
	return DarkestSecret;
}

void	Contact::SetDarkestSecret(std::string Secret)
{
	DarkestSecret = Secret;
}

std::string Contact::GetNickName()
{
	return NickName;
}

void	Contact::SetNickName(std::string Nick)
{
	NickName = Nick;
}

int Contact::GetPhoneNumber()
{
	return PhoneNumber;
}

int	Contact::SetPhoneNumber(int Number)
{
	if (Number >= '0' || Number <= '9')
		PhoneNumber = Number;
	else
	{
		printf("%d\n", Number);
		return (0);
	}
	return (1);
}
