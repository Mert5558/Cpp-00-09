/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:12:56 by merdal            #+#    #+#             */
/*   Updated: 2025/02/25 15:23:22 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "2 arguments needed!" << std::endl;
		return (1);
	}
	BitcoinExchange exchange;

	exchange.readData("data.csv");
	exchange.readInput(argv[1]);

	return (0);
}