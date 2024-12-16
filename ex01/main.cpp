/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:41:39 by svogrig           #+#    #+#             */
/*   Updated: 2024/12/16 14:47:58 by svogrig          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include "msg_color.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	Contact		contact;
	std::string	input;

	try
	{
		while (input != "EXIT")
		{
			std::cout << YELLOW "What can i do for you (ADD or SEARCH or EXIT) : " RESET;
			if(!std::getline(std::cin, input) || std::cin.eof())
				throw std::runtime_error(RED "\nmain: getline(): error or eof" RESET);
			if (input == "ADD")
			{
				contact.init();
				phoneBook.add(contact);
			}
			else if (input == "SEARCH")
				phoneBook.search();
		}
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << '\n';
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
