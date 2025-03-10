/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:13:15 by merdal            #+#    #+#             */
/*   Updated: 2024/11/22 13:10:55 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook PhoneB;
	std::string input = "";

	PhoneB.printMessage();
	while (input.compare("EXIT") && std::cin.good())
	{
		if (input.compare("ADD") == 0)
		{
			PhoneB.addContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			PhoneB.searchContact();
		}
		std::cout << "Command: ";
		std::cin >> input;
	}
}
