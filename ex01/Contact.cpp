/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:42 by svogrig           #+#    #+#             */
/*   Updated: 2024/11/20 02:40:30 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor Contact" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Contact" << std::endl;
}

void	Contact::print(void)
{
	std::cout << "First name : " << this->firstName << std::endl;
	std::cout << "Last name : " << this->lastName << std::endl;
	std::cout << "Nick name : " << this->nickname << std::endl;
	std::cout << "Phone number : " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->darkestSecret << std::endl;
}
