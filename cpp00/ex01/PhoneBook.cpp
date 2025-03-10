/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:56:01 by merdal            #+#    #+#             */
/*   Updated: 2024/11/22 11:56:41 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

PhoneBook::PhoneBook()
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::printMessage(void)
{
	std::cout << "Welcome to the Phonebook\n" << std::endl;
	std::cout << "type ADD to add a contact" << std::endl;
	std::cout << "type SEARCH to search a contact" << std::endl;
	std::cout << "type EXIT to exit the Phonebook\n" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int index = 0;

	std::cin.ignore();

	this->contacts[index].initContact();
	this->contacts[index].initContactId(index);
	std::cout << "Contact added\n" << std::endl;
	index = (index + 1) % 8;

	if (this->contact_count < 8)
		this->contact_count++;
}

std::string PhoneBook::formatField(const std::string& field) const
{
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    else
        return field;
}

void PhoneBook::printContacts(void)
{
	std::cout << std::setw(10) << "ID" << "|"
              << std::setw(10) << "1st name" << "|"
              << std::setw(10) << "Last name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
	
	if (this->contact_count == 0)
	{
		std::cout << "No contacts added yet\n" << std::endl;
		return;
	}

	for (int i = 0; i < this->contact_count; i++)
    {
        std::cout << std::setw(10) << this->contacts[i].getContactId() << "|"
                  << std::setw(10) << formatField(this->contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(this->contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(this->contacts[i].getNickname()) << std::endl;
    }

	this->findContact();
}

void PhoneBook::findContact(void)
{
	int id;
	bool found = false;

	while (!found)
	{
		std::cout << "Enter the ID of the contact you want to see: ";
		std::cin >> id;

		for (int i = 0; i < this->contact_count; i++)
		{
			if (this->contacts[i].getContactId() == id)
			{
				std::cout << "ID: " << this->contacts[i].getContactId() << std::endl;
				std::cout << "First name: " << this->contacts[i].getFirstName() << std::endl;
				std::cout << "Last name: " << this->contacts[i].getLastName() << std::endl;
				std::cout << "Nickname: " << this->contacts[i].getNickname() << std::endl;
				std::cout << "Phone number: " << this->contacts[i].getPhoneNumber() << std::endl;
				std::cout << "Darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
				found = true;
				return;
			}
		}
		std::cout << "Contact ID " << id << " not found\n" << std::endl;
	}
}

void PhoneBook::searchContact(void)
{
	this->printContacts();
}
