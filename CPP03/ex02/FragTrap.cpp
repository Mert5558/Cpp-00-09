/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:47:52 by merdal            #+#    #+#             */
/*   Updated: 2024/12/06 11:56:51 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap Default constructor called";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage(30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " is created" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage(30);
}

FragTrap::FragTrap