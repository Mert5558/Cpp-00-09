/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:38:18 by merdal            #+#    #+#             */
/*   Updated: 2025/01/29 13:19:19 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat alice("Alice", 50);
		std::cout << alice << std::endl;

		Form taxForm("Tax Form", 49, 100);
		std::cout << taxForm << std::endl;

		alice.signForm(taxForm);

		alice.incrementGrade();
		std::cout << alice << std::endl;

		alice.signForm(taxForm);
		std::cout << taxForm << std::endl;

		Bureaucrat boss("Boss", 1);
		std::cout << boss << std::endl;

		Form secretForm("Secret Document", 1, 1);
		std::cout << secretForm << std::endl;

		boss.signForm(secretForm);
		std::cout << secretForm << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{

		Form invalidForm("Invalid Form", 0, 160);
		std::cout << invalidForm << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{

		Bureaucrat invalidBureaucrat("Invalid", 151);
		std::cout << invalidBureaucrat << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
