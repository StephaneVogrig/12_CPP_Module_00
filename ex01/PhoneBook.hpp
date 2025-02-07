/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:02:55 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/07 12:59:50 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "utils.hpp"
# include "Contact.hpp"

class PhoneBook
{
	public:
	
		PhoneBook();
		~PhoneBook();
		void	add(Contact contact);
		void	search(void);
		void	display(void) const;
		
	private:
	
		Contact	contacts[8];
		int		registered;
		int		current_index;

		void	print_width(std::string) const;
		int		chooseIndex(void);
};

#endif
