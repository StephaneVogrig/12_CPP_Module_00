/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/18 18:28:04 by svogrig          ###   ########.fr       */
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
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

/* setters ------------------------------------------------------------------ */

void	Contact::setFirstName(const std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(const std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickName(const std::string nickName)
{
	this->_nickName = nickName;
}

void Contact::setPhoneNumber(const std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void Contact::setDarkSecret(const std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
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
	this->_firstName = ask("First name");
	this->_lastName = ask("Last name");
	this->_nickName = ask("Nick name");
	this->_phoneNumber = ask("Phone number");
	this->_darkestSecret = ask("Darkest secret");
}
