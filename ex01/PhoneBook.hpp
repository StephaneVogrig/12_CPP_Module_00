/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:02:55 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/07 14:18:52 by svogrig          ###   ########.fr       */
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
	
		Contact	_contacts[8];
		int		_registered;
		int		_current_index;

		void	print_width(std::string) const;
		int		chooseIndex(void);
};

#endif
