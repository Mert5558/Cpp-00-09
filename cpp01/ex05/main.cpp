/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:47:51 by merdal            #+#    #+#             */
/*   Updated: 2024/11/26 12:44:14 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl logger;
	logger.complain("DEBUG");
	logger.complain("INFO");
	logger.complain("WARNING");
	logger.complain("ERROR");
	logger.complain("INVALID");
}