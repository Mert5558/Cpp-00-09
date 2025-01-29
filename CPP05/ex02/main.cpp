/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:01:40 by merdal            #+#    #+#             */
/*   Updated: 2025/01/29 13:29:31 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat alice("Alice", 50);
		Bureaucrat boss("Boss", 1);

		ShrubberyCreationForm shrubberyForm("Garden");
		RobotomyRequestForm robotomyForm("Alice");
		PresidentialPardonForm pardonForm("Bob");

		std::cout << "\n--- ShrubberyCreationForm ---\n";
		alice.signForm(shrubberyForm);
		alice.executeForm(shrubberyForm);

		std::cout << "\n--- RobotomyRequestForm ---\n";
		alice.signForm(robotomyForm);
		boss.executeForm(robotomyForm);
		std::cout << "\n--- PresidentialPardonForm ---\n";
		boss.signForm(pardonForm);
		boss.executeForm(pardonForm);

		std::cout << "\n--- Failure Case ---\n";
		alice.executeForm(pardonForm);

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}