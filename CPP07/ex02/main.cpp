/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:14:34 by merdal            #+#    #+#             */
/*   Updated: 2025/02/17 12:19:03 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> arr(3);

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;

	try
	{
		std::cout << arr[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}