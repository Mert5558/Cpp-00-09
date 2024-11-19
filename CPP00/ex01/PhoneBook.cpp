/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:56:01 by merdal            #+#    #+#             */
/*   Updated: 2024/11/19 15:48:48 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void PhoneBook::printMessage(void)
{
	std::cout << "Welcome to the Phonebook\n" << std::endl;
	std::cout << "type ADD to add a contact" << std::endl;
	std::cout << "type SEARCH to search a contact" << std::endl;
	std::cout << "type EXIT to exit the Phonebook\n" << std::endl;
}

void	PhoneBook::addContact(void)
{
	int index = 0;
	this->total_contacts = 0;

	std::cin.ignore();

	this->contacts[index].initContact();
	this->contacts[index].intiContactId(total_contacts);
	std::cout << "Contact added\n" << std::endl;
	index = (index + 1) % 8;
	this->total_contacts++;

	if (this->contact_count < 8)
		this->contact_count++;
}

void PhoneBook::printContacts(void)
{
	std::cout << std::setw(10) << "ID" << "|"
              << std::setw(10) << "1st name" << "|"
              << std::setw(10) << "Last name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
}

void PhoneBook::searchContact(void)
{
	this->printContacts();
}