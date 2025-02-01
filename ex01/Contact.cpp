/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/01 21:25:50 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

std::string	Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->lastName);
}

std::string	Contact::getNickName(void)
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

void	Contact::print(void)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << YELLOW << "First name     : " << RESET << this->firstName << std::endl;
	std::cout << YELLOW << "Last name      : " << RESET << this->lastName << std::endl;
	std::cout << YELLOW << "Nick name      : " << RESET << this->nickName << std::endl;
	std::cout << YELLOW << "Phone number   : " << RESET << this->phoneNumber << std::endl;
	std::cout << YELLOW << "Darkest secret : " << RESET << this->darkestSecret << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

static std::string ask(std::string msg)
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
