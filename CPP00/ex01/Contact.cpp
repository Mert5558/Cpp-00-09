/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:35:04 by merdal            #+#    #+#             */
/*   Updated: 2024/11/19 14:52:39 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getInput(std::string prompt)
{
	std::string input;
	while (true)
	{
		std::cout << "Please enter your " << prompt;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "No valid input" << std::endl;
		else
			break;
	}
	return input;
}

void Contact::initContact(void)
{
	this->first_name = getInput("First name: ");
	this->last_name = getInput("Last name: ");
	this->nickname = getInput("Nickname: ");
	this->phone_number = getInput("Phone number: ");
	this->darkest_secret = getInput("Darkest secret: ");
}

void Contact::intiContactId(int index)
{
	this->contactId = index;
}