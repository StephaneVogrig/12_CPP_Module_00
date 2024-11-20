/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:13 by svogrig           #+#    #+#             */
/*   Updated: 2024/11/20 01:59:37 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	std::cout << "Constructor Phonebook" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor Phonebook" << std::endl;
}

void PhoneBook::add(Contact contact)
{
	std::cout << "First name : " << contact.firstName << std::endl;
	std::cout << "Last name : " << contact.lastName << std::endl;
	std::cout << "Nick name : " << contact.nickname << std::endl;
	std::cout << "Phone number : " << contact.phoneNumber << std::endl;
	std::cout << "Darkest secret : " << contact.darkestSecret << std::endl;
}

void PhoneBook::search(void)
{
	std::cout << "Phonebook Search" << std::endl;
}
