/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:09:54 by merdal            #+#    #+#             */
/*   Updated: 2024/11/22 15:52:32 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	if (N < 0)
	{
		std::cout << "Invalid number of zombies\n";
		return (1);
	}
	Zombie *horde = zombieHorde(N, "Zombie Solider");

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}