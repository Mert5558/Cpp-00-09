/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:46:15 by merdal            #+#    #+#             */
/*   Updated: 2024/11/22 13:03:44 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private:
		//private member variables
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		int			contactId;
		
		//private member functions
		std::string getInput(std::string prompt);
	
	public:
		Contact();
		~Contact();
	
		//pulic member functions
		void initContact(void);
		void initContactId(int index);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		int getContactId() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif