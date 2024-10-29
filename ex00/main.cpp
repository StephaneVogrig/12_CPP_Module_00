/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:56:00 by svogrig           #+#    #+#             */
/*   Updated: 2024/10/29 03:47:49 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	while (--argc){
		std::string str(*++argv);
		for (std::string::iterator it = str.begin(); it != str.end(); it++){
			*it = std::toupper(*it);
		}
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
