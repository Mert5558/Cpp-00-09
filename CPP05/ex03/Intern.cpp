/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:40:38 by merdal            #+#    #+#             */
/*   Updated: 2025/01/24 15:49:52 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

AForm *Intern::newShrubbery(std::string name)
{
	return (new ShrubberyCreationForm(name));
}

AForm *Intern::newRobot(std::string name)
{
	return (new RobotomyRequestForm(name));
}

AForm *Intern::newPresident(std::string name)
{
	return (new PresidentialPardonForm(name));
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	
}

Intern::~Intern()
{}