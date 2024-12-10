/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:09:25 by merdal            #+#    #+#             */
/*   Updated: 2024/12/10 14:41:11 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	const Animal* Johnny = new Animal();
	const Animal* Scooby = new Dog();
	const Animal* Garfield = new Cat();

	std::cout << std::endl;
	std::cout << Johnny->getType() << " " << std::endl;
	std::cout << Scooby->getType() << " " << std::endl;
	std::cout << Garfield->getType() << " " << std::endl;

	std::cout << std::endl;
	Johnny->makeSound();
	Scooby->makeSound();
	Garfield->makeSound();

	std::cout << std::endl;
	delete Garfield;
	delete Scooby;
	delete Johnny;
}
