/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:42 by svogrig           #+#    #+#             */
/*   Updated: 2024/12/16 00:23:54 by svogrig          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Constructor Contact" << std::endl;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor Contact" << std::endl;
}

void	Contact::print(void)
{
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "First name : " << this->firstName << std::endl;
	std::cout << "Last name : " << this->lastName << std::endl;
	std::cout << "Nick name : " << this->nickName << std::endl;
	std::cout << "Phone number : " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->darkestSecret << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}

static std::string ask(std::string msg)
{
	std::string input;

	while (input.empty())
	{
		std::cout << msg << " : ";
		std::getline(std::cin, input);
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
