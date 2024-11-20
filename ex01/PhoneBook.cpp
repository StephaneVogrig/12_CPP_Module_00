/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:13 by svogrig           #+#    #+#             */
/*   Updated: 2024/11/20 02:49:20 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	std::cout << "Constructor Phonebook" << std::endl;
	this->offset = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor Phonebook" << std::endl;
}

void PhoneBook::add(Contact contact)
{
	std::cout << "offset : " << this->offset << std::endl;
	contact.print();
	this->contacts[offset] = contact;
	this->offset++;
	if (offset == 8)
		offset = 0;
}

void PhoneBook::search(void)
{
	std::cout << "Phonebook Search" << std::endl;
	this->contacts[0].print();
}
