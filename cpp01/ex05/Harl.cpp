/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:40:33 by merdal            #+#    #+#             */
/*   Updated: 2024/11/25 15:56:39 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n This is a debug message." << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\n This is an info message." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\n This is a warning message." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\n This is an error message." << std::endl;
}

void Harl::complain(std::string level)
{
	
}