/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:11:16 by merdal            #+#    #+#             */
/*   Updated: 2025/01/24 14:45:04 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequest", 72, 45), target("undefined")
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &robot): AForm(robot.getName(), robot.getGradeSign(), robot.getGradeExec()), target(robot.target)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{}