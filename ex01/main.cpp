/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:41:39 by svogrig           #+#    #+#             */
/*   Updated: 2024/11/22 15:24:33 by svogrig          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phoneBook;
	Contact	contact;
	std::string input;
	
	while (!std::cin.eof() && input != "EXIT")
	{
		std::cout << "What can i do for you (ADD or SEARCH or EXIT) : ";
		std::getline(std::cin, input);
		if (input == "ADD"){
			contact.init();
			phoneBook.add(contact);
		}
		if (input == "SEARCH"){
			phoneBook.search();
		}
	}
	return (0);
}
