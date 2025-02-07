/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:54:01 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/06 12:51:02 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void clean(std::string& str)
{
	while (str.begin() != str.end() && std::isspace(*str.begin()))
		str.erase(str.begin());

	std::string::iterator end = str.end();
	while (--end != str.begin() && std::isspace(*end))
		str.erase(end);
		
	std::size_t found = str.find_first_of("\f\r\t\v");
	while (found != std::string::npos)
	{
		str.replace(found,1," ");
		found = str.find_first_of("\f\r\t\v", found + 1);
	}
}
