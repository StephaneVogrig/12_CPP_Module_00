/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:13 by svogrig           #+#    #+#             */
/*   Updated: 2024/12/16 01:15:26 by svogrig          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	this->current_index = 0;
	this->registered = 0;
}

PhoneBook::~PhoneBook()
{}

void PhoneBook::add(Contact contact)
{
	this->contacts[current_index] = contact;
	this->current_index++;
	if (this->current_index == 8)
		this->current_index = 0;
	if (this->registered < 8)
		this->registered++;
}

void	PhoneBook::print_width(std::string str)
{
	if (str.length() <= 10)
	{
		std::cout.width(10);
		std::cout << str;
	}
	else
		std::cout << str.substr(0,9) << '.';
}

void	PhoneBook::print(void)
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nick Name|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	if (this->registered == 0)
	{
		std::cout << "|          the phoneBook is empty !         |" << std::endl;
	}
	for (int i = 0; i < this->registered; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i << "|";
		PhoneBook::print_width(this->contacts[i].firstName);
		std::cout << "|";
		PhoneBook::print_width(this->contacts[i].lastName);
		std::cout << "|";
		PhoneBook::print_width(this->contacts[i].nickName);
		std::cout << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

int	PhoneBook::chooseIndex(void)
{
	int			index;
	std::string	input;

	while (true)
	{
		std::cout << "Choose an index : ";
		std::getline(std::cin, input);
		if (input.length() != 1 || !isdigit(input[0]))
		{
			std::cout << "Invalid index, try again !" << std::endl;
			continue ;
		}
		index = input[0] - '0';
		if (index < this->registered)
			break ;
		std::cout << "the index must be between 0 and " << this->registered - 1;
		std::cout << ", try again ! " << std::endl;
	}
	return (index);
}

void PhoneBook::search(void)
{
	int index;

	this->print();
	if (this->registered == 0)
		return ;
	index = this->chooseIndex();
	this->contacts[index].print();
}
