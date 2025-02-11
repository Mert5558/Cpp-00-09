/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:02:50 by merdal            #+#    #+#             */
/*   Updated: 2025/02/10 15:16:27 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

int main()
{
	// Test with int array
	int intArr[] = {1, 2, 3, 4, 5};
	std::cout << "Integer Array: ";
	iter(intArr, 5, printElement);
	std::cout << std::endl;

	// Test with string array
	std::string strArr[] = {"Hello", "World", "CPP", "Templates"};
	std::cout << "String Array: ";
	iter(strArr, 4, printElement);
	std::cout << std::endl;

	// Test with char array
	char charArr[] = {'A', 'B', 'C', 'D', 'E'};
	std::cout << "Char Array: ";
	iter(charArr, 5, printElement);
	std::cout << std::endl;

	return 0;
}