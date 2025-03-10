/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:05:21 by merdal            #+#    #+#             */
/*   Updated: 2024/11/22 11:55:49 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		//private member varaibles
		int contact_count;
		Contact contacts[8];

		//private member functions
		std::string formatField(const std::string& field) const;
		void findContact(void);

	public:
		PhoneBook();
		~PhoneBook();

		//public member functions
		void addContact(void);
		void printMessage(void);
		void searchContact(void);
		void printContacts(void);
		void fillInContacts(void);
};

#endif