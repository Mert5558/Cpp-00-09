/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:22:55 by merdal            #+#    #+#             */
/*   Updated: 2025/02/21 14:34:19 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>


int main()
{
	std::vector<int> vec = {10, 20, 30, 40, 50};
	std::list<int> lst = {5, 15, 25, 35, 45};

	std::cout << "Searching in vector: ";
	for (int n : vec) std::cout << n << " ";
	std::cout << std::endl;

	try
	{
		auto it = easyfind(vec, 30);
		std::cout << "Found " << *it << " at index " << std::distance(vec.begin(), it) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		auto it = easyfind(vec, 99);
		std::cout << "Found " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nSearching in list: ";
	for (int n : lst) std::cout << n << " ";
	std::cout << std::endl;

	try
	{
		auto it = easyfind(lst, 15);
		std::cout << "Found " << *it << " at index " << std::distance(lst.begin(), it) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		auto it = easyfind(lst, 100);
		std::cout << "Found " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}