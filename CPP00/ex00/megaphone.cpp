/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:07:37 by merdal            #+#    #+#             */
/*   Updated: 2024/11/15 13:46:46 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = 1;
	if (argc > 1)
	{
		while (x < argc)
		{
			i = 0;
			while (argv[x][i])
			{
				std :: cout << (char)toupper(argv[x][i]);
				i++;
			}
			if (argv[x])
				std::cout << " ";
			x++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
