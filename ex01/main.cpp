/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:41:39 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/18 20:41:33 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "utils.hpp"
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
			std::cin.exceptions(std::ifstream::failbit | std::ifstream::badbit);
			std::getline(std::cin, input);
			if(std::cin.eof())
				throw std::runtime_error(RED "\nmain: getline(): eof" RESET);
			clean(input);
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
