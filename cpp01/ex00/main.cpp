/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:01:05 by merdal            #+#    #+#             */
/*   Updated: 2024/11/21 14:44:27 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *BigZombie = newZombie("BigZombie");
	BigZombie->announce();
	randomChump("SmallZombie");
	delete BigZombie;
	return (0);
}