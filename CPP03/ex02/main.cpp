/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:00:21 by merdal            #+#    #+#             */
/*   Updated: 2024/12/06 13:46:43 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap char1("Goku");
	FragTrap char2("Vegeta");
	ScavTrap char3("Naruto");

	char1.attack("Vegeta");
	char2.takeDamage(25);
	char2.takeDamage(5);
	char2.beRepaired(15);
	char2.highFiveGuys();

	char2.attack("Naruto");
	char3.takeDamage(105);
	char3.takeDamage(5);
	char3.beRepaired(5);
	char3.guardGate();
}