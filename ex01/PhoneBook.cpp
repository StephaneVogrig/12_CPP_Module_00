/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:13 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/07 14:27:55 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_current_index = 0;
	_registered = 0;
}

PhoneBook::~PhoneBook()
{}

void PhoneBook::add(Contact contact)
{
	_contacts[_current_index] = contact;
	_current_index++;
	if (_current_index == 8)
		_current_index = 0;
	if (_registered < 8)
		_registered++;
}

void	PhoneBook::print_width(std::string str) const
{
	if (str.length() <= 10)
	{
		std::cout.width(10);
		std::cout << str;
	}
	else
		std::cout << str.substr(0,9) << '.';
}

void	PhoneBook::display(void) const
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nick Name|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	if (_registered == 0)
	{
		std::cout << "|          the phoneBook is empty !         |" << std::endl;
	}
	for (int i = 0; i < _registered; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i << "|";
		PhoneBook::print_width(_contacts[i].getFirstName());
		std::cout << "|";
		PhoneBook::print_width(_contacts[i].getLastName());
		std::cout << "|";
		PhoneBook::print_width(_contacts[i].getNickName());
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
		if (index < _registered)
			break ;
		std::cout << RED << "the index must be between 0 and " << _registered - 1;
		std::cout << ", try again ! " << RESET << std::endl;
	}
	return (index);
}

void PhoneBook::search(void)
{
	int index;

	this->display();
	if (_registered == 0)
		return ;
	index = this->chooseIndex();
	if (index >= 0 && index <= _registered)
		_contacts[index].display();
}
