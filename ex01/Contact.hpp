/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:03:27 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/07 14:14:52 by svogrig          ###   ########.fr       */
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

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;

		/* Setters */

		void setFirstName(const std::string firstName);
		void setLastName(const std::string lastName);
		void setNickName(const std::string nickName);
		void setPhoneNumber(const std::string phoneNumber);
		void setDarkSecret(const std::string darkestSecret);

		/* Display the contact's information */

		void display(void) const;

		void init(void);

	private:

		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

};

#endif
