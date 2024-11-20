/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:41:39 by svogrig           #+#    #+#             */
/*   Updated: 2024/11/20 01:55:20 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string ask(std::string msg)
{
	std::string input;
	while (input == "")
	{
		std::cout << msg << " : ";
		std::cin >> input;
	}
	return input;	
}

void	search()
{
	std::cout << "search_contact" << std::endl;
}

void	ask_contact(Contact	*contact)
{
	contact->firstName = ask("First name");
	contact->lastName = ask("Last name");
	contact->nickname = ask("Nick name");
	contact->phoneNumber = ask("Phone number");
	contact->darkestSecret = ask("Darkest secret");
}

int	main(void)
{
	PhoneBook phoneBook;
	Contact	contact;
	std::string input;
	
	while (!std::cin.eof() && input != "EXIT")
	{
		std::cout << "What can i do for you ? : ";
		std::cin >> input;
		
		if (input == "ADD"){
			ask_contact(&contact);
			phoneBook.add(contact);
		}
		if (input == "SEARCH"){
			phoneBook.search();
		}
		// std::cout << "Your entry : " << input << std::endl;
	}
	return (0);
}
