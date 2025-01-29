/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:01:40 by merdal            #+#    #+#             */
/*   Updated: 2025/01/29 13:37:08 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern johnny;

		Bureaucrat boss("Boss", 1);
		Bureaucrat middleManager("Middle Manager", 50);
		Bureaucrat newbie("Newbie", 150);

		AForm* shrubberyForm = johnny.makeForm("shrubbery creation", "Garden");
		AForm* robotomyForm = johnny.makeForm("robotomy request", "Robot");
		AForm* pardonForm = johnny.makeForm("presidential pardon", "Alice");

		std::cout << "\n=== Testing Forms ===\n";

		if (shrubberyForm)
		{
			middleManager.signForm(*shrubberyForm);
			boss.signForm(*shrubberyForm);
			boss.executeForm(*shrubberyForm);
		}

		std::cout << "\n";

		if (robotomyForm)
		{
			newbie.signForm(*robotomyForm);
			boss.signForm(*robotomyForm);
			boss.executeForm(*robotomyForm);
		}

		std::cout << "\n";

		if (pardonForm)
		{
			middleManager.signForm(*pardonForm);
			boss.signForm(*pardonForm);
			boss.executeForm(*pardonForm);
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
