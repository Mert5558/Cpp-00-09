/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:21:31 by merdal            #+#    #+#             */
/*   Updated: 2024/12/10 16:01:19 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor is called" << std::endl;
	this->Animal::type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->Animal::type = copy.type;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "copy assigment operator overload called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "wau wau" << std::endl;
}