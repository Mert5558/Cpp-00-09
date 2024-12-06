/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:04:00 by merdal            #+#    #+#             */
/*   Updated: 2024/12/05 14:02:12 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap " << name << " is copied" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is out of energy or dead" << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is already dead" << std::endl;
		return ;
	}
	if (amount > hitPoints)
		hitPoints = 0;
	else
		this->hitPoints = hitPoints - amount;
	std::cout << "ClapTrap " << name << " take " << amount << " points of damage!, remaining hitpoints: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 10)
	{
		std::cout << "ClapTrap " << name << " is already full health"  << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << name << " is repaired for " << amount << " points of Health!" << std::endl;
	this->hitPoints = hitPoints + amount;
	this->energyPoints--;
}