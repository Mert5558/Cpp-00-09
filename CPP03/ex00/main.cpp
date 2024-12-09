/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:00:21 by merdal            #+#    #+#             */
/*   Updated: 2024/12/09 13:33:48 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap char1("Naruto");
	ClapTrap char2("Sasuke");

	char1.attack("Sasuke");
	char2.takeDamage(5);
	char2.takeDamage(1);
	char2.beRepaired(3);
	
	char2.attack("Naruto");
	char1.takeDamage(15);
	char1.takeDamage(1);
	char1.beRepaired(3);
}