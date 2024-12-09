/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:09:34 by merdal            #+#    #+#             */
/*   Updated: 2024/12/09 13:47:17 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default constructor" << std::endl;
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " is created" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called";
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap copy assigment overload called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " <<  name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ScavTrap " << name << " is out of energy or dead" << std::endl;
		return ;
	}
	
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}