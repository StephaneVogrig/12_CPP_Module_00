/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/07 14:00:55 by svogrig          ###   ########.fr       */
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
	return (firstName);
}

std::string	Contact::getLastName(void) const
{
	return (lastName);
}

std::string	Contact::getNickName(void) const
{
	return (nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (darkestSecret);
}

/* setters ------------------------------------------------------------------ */

void	Contact::setFirstName(const std::string fName)
{
	firstName = fName;
}

void	Contact::setLastName(const std::string lName)
{
	lastName = lName;
}

void	Contact::setNickName(const std::string nName)
{
	nickName = nName;
}

void	Contact::setPhoneNumber(const std::string phone)
{
	phoneNumber = phone;
}

void	Contact::setDarkSecret(const std::string secret)
{
	darkestSecret = secret;
}

/* Display the contact's information ---------------------------------------- */

void	Contact::display(void) const
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << YELLOW << "First name     : " << RESET << this->firstName << std::endl;
	std::cout << YELLOW << "Last name      : " << RESET << this->lastName << std::endl;
	std::cout << YELLOW << "Nick name      : " << RESET << this->nickName << std::endl;
	std::cout << YELLOW << "Phone number   : " << RESET << this->phoneNumber << std::endl;
	std::cout << YELLOW << "Darkest secret : " << RESET << this->darkestSecret << std::endl;
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

void	Contact::init(void)
{
	this->firstName = ask("First name");
	this->lastName = ask("Last name");
	this->nickName = ask("Nick name");
	this->phoneNumber = ask("Phone number");
	this->darkestSecret = ask("Darkest secret");
}
