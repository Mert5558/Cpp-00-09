/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:09:54 by merdal            #+#    #+#             */
/*   Updated: 2024/11/22 15:06:51 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 55;
	if (N < 0)
	{
		std::cout << "Invalid number of zombies\n";
		return (1);
	}
	Zombie *horde = zombieHorde(N, "Zombie");

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}