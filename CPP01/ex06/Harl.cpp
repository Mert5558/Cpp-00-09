/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:40:33 by merdal            #+#    #+#             */
/*   Updated: 2024/11/26 14:10:49 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\n I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\n I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\n This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	int i = 0;

	while (i < 4)
	{
		if (level == levels[i])
			break;
		i++;
	}
	
	switch (i)
	{
		case 0:
			(this->*functions[i++])();
		case 1:
			(this->*functions[i++])();
		case 2:
			(this->*functions[i++])();
		case 3:
			(this->*functions[i++])();
			return;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}