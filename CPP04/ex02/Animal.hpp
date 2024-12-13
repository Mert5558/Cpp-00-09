/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:38:48 by merdal            #+#    #+#             */
/*   Updated: 2024/12/13 13:28:06 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
	
	public:
		virtual ~Animal();

		virtual void makeSound() const = 0;
		std::string getType(void) const;
};