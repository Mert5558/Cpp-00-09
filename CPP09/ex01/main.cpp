/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:05:46 by merdal            #+#    #+#             */
/*   Updated: 2025/02/26 15:10:27 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "need 2 arguments!" << std::endl;
		return (1);
	}

	if (!RPN::checkInput(argv[1]))
	{
		std::cerr << "Error: Invalid RPN!" << std::endl;
		return (1);
	}
	
	RPN rpn;
	int result = rpn.processInput(argv[1]);

	std::cout << result << std::endl;
	return (0);
}