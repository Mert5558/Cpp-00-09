/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:09:25 by merdal            #+#    #+#             */
/*   Updated: 2024/12/13 13:29:52 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	int amount = 5;
	Animal	*animalArray[2 * amount];

	for (int i = 0; i < amount; i++)
	{
		animalArray[i] = new Dog();
		animalArray[amount + i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 2 * amount; i++)
		delete animalArray[i];
}
