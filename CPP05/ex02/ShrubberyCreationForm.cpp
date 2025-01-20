/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:08:22 by merdal            #+#    #+#             */
/*   Updated: 2025/01/20 15:35:50 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("undefined")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrub): AForm(shrub.getName(), shrub.getGradeSign(), shrub.getGradeExec()), target(shrub.target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
	(void) copy;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}