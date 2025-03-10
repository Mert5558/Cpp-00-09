/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:35:04 by merdal            #+#    #+#             */
/*   Updated: 2024/11/22 13:04:32 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

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

// getters and setters

void Contact::initContactId(int index)
{
    this->contactId = index;
}

std::string Contact::getFirstName() const
{
    return this->first_name;
}

std::string Contact::getLastName() const
{
    return this->last_name;
}

std::string Contact::getNickname() const
{
    return this->nickname;
}

int Contact::getContactId() const
{
    return this->contactId;
}

std::string Contact::getPhoneNumber() const
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret() const
{
	return this->darkest_secret;
}