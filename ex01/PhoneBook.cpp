/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:13 by svogrig           #+#    #+#             */
/*   Updated: 2025/01/28 02:26:04 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
		PhoneBook::print_width(this->contacts[i].getFirstName());
		std::cout << "|";
		PhoneBook::print_width(this->contacts[i].getLastName());
		std::cout << "|";
		PhoneBook::print_width(this->contacts[i].getNickName());
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
		std::cout << YELLOW << "Choose an index : " << RESET;
		if(!std::getline(std::cin, input) || std::cin.eof())
			throw std::runtime_error(RED "\nPhoneBook.chooseIndex(): getline(): error or eof" RESET);
		if (input.length() != 1 || !isdigit(input[0]))
		{
			std::cout << RED << "Invalid index, try again !" << RESET << std::endl;
			continue ;
		}
		index = input[0] - '0';
		if (index < this->registered)
			break ;
		std::cout << RED << "the index must be between 0 and " << this->registered - 1;
		std::cout << ", try again ! " << RESET << std::endl;
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
	if (index >= 0 && index <= this->registered)
		this->contacts[index].print();
}
