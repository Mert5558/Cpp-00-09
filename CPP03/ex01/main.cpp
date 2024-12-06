/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:00:21 by merdal            #+#    #+#             */
/*   Updated: 2024/12/05 15:11:04 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap char1("Naruto");
	ScavTrap char2("Sasuke");

	char1.attack("Sasuke");
	char2.takeDamage(5);
	char2.takeDamage(1);
	char2.beRepaired(3);
	
	char2.attack("Naruto");
	char1.takeDamage(5);
	char1.takeDamage(1);
	char1.beRepaired(3);
	char1.guardGate();
}