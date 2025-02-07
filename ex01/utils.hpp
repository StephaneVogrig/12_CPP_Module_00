/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:53:58 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/06 12:48:19 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLEAN_INPUT_HPP
# define CLEAN_INPUT_HPP

# define RED "\e[0;31m"
# define YELLOW "\e[0;33m"
# define RESET "\e[0m"

#include <string>

void clean(std::string& str);

#endif