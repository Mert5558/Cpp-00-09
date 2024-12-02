/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:16:44 by merdal            #+#    #+#             */
/*   Updated: 2024/12/02 15:02:03 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 5);

	Point point1(3, 1);
	Point point2(10, 2);
	Point point3(-2, 3);

	std::cout << bsp(a, b, c, point1) << std::endl;
	std::cout << bsp(a, b, c, point2) << std::endl;
	std::cout << bsp(a, b, c, point3) << std::endl;
}