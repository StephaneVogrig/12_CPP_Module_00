/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:42 by svogrig           #+#    #+#             */
/*   Updated: 2024/11/20 01:53:04 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Constructor Contact" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destructor Contact" << std::endl;
}
