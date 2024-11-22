/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:12:46 by merdal            #+#    #+#             */
/*   Updated: 2024/11/21 15:46:32 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << this->name << " has died\n" << std::endl; 
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
