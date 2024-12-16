/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:02:55 by svogrig           #+#    #+#             */
/*   Updated: 2024/12/16 14:47:33 by svogrig          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "msg_color.h"
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add(Contact contact);
		void	search(void);
		void	print(void);

	private:
		Contact	contacts[8];
		int		registered;
		int		current_index;

		void	print_width(std::string);
		int		chooseIndex(void);
};

#endif
