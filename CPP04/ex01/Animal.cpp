/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:51:59 by merdal            #+#    #+#             */
/*   Updated: 2024/12/10 12:46:41 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->Animal::type = "Default Animal";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "copy assigment operator overload called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Default animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "some animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}