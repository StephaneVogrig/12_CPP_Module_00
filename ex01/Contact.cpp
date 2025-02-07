/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/07 14:16:51 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


/* constructor -------------------------------------------------------------- */

Contact::Contact(void)
{}

/* destructor --------------------------------------------------------------- */

Contact::~Contact(void)
{}

/* getters ------------------------------------------------------------------ */

std::string	Contact::getFirstName(void) const
{
	return (_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (_nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (_darkestSecret);
}

/* setters ------------------------------------------------------------------ */

void	Contact::setFirstName(const std::string firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(const std::string lastName)
{
	_lastName = lastName;
}

void	Contact::setNickName(const std::string nickName)
{
	_nickName = nickName;
}

void Contact::setPhoneNumber(const std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void Contact::setDarkSecret(const std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

/* Display the contact's information ---------------------------------------- */

void Contact::display(void) const
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << YELLOW << "First name     : " << RESET << _firstName << std::endl;
	std::cout << YELLOW << "Last name      : " << RESET << _lastName << std::endl;
	std::cout << YELLOW << "Nick name      : " << RESET << _nickName << std::endl;
	std::cout << YELLOW << "Phone number   : " << RESET << _phoneNumber << std::endl;
	std::cout << YELLOW << "Darkest secret : " << RESET << _darkestSecret << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

std::string ask(std::string msg)
{
	std::string input;

	while (true)
	{
		std::cout << msg << " : ";
		if (!std::getline(std::cin, input) || std::cin.eof())
			throw std::runtime_error(RED "\nContact.ask(): getline(): error or eof" RESET);
		clean(input);
		if (!input.empty())
			break ;
		std::cout << YELLOW << "The field can't be empty !" << RESET << std::endl;
	}
	return input;
}

void Contact::init(void)
{
	_firstName = ask("First name");
	_lastName = ask("Last name");
	_nickName = ask("Nick name");
	_phoneNumber = ask("Phone number");
	_darkestSecret = ask("Darkest secret");
}
