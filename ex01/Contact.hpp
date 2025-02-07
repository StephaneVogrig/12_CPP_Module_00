/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:27 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/07 14:01:37 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include "utils.hpp"

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		/* getters */

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;

		/* Setters */

		void		setFirstName(const std::string fName);
		void		setLastName(const std::string fName);
		void		setNickName(const std::string nName);
		void		setPhoneNumber(const std::string phone);
		void 		setDarkSecret(const std::string secret);

		/* Display the contact's information */

		void		display(void) const;

		void		init(void);

	private:

		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

};

#endif
