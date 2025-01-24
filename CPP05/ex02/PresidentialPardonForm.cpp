/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:38:39 by merdal            #+#    #+#             */
/*   Updated: 2025/01/24 14:50:36 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardon", 25, 5), target("undefined")
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &pres): AForm(pres.getName(), pres.getGradeSign(), pres.getGradeExec()), target(pres.target)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 145, 137), target(target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{}