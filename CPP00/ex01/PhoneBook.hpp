/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:05:21 by merdal            #+#    #+#             */
/*   Updated: 2024/11/19 15:12:06 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		int contact_count;
		int total_contacts;
		Contact contacts[8];

	public:
		void addContact(void);
		void printMessage(void);
		void searchContact(void);
		void printContacts(void);
};

#endif