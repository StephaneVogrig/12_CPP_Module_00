/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:32:53 by svogrig           #+#    #+#             */
/*   Updated: 2024/11/20 02:05:09 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "* LOUD AND UNBEARABLE FEEDBACK NOISE *", 38);
	}
	while (--argc)
	{
		argv++;
		char *str = *argv;
		while (*str){
			*str = toupper(*str);
			str++;
		}
		write(1, *argv, str - *argv);
	}
	write(1, "\n", 1);
	return (0);
}
