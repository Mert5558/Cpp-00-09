/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:18:38 by merdal            #+#    #+#             */
/*   Updated: 2025/01/09 13:57:35 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name("NoName"),grade(1)
{}

Bureaucrat(std::string name, int grade)
{
	
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->grade = copy.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::GradeTooHighException() const throw()
{
	return ("Grade is too high!");
}

Bureaucrat::GradeTooLowException() const throw()
{
	return ("Grade is to low!");
}

Bureaucrat::getName()
{
	return (this->name);
}

Bureaucrat::getGrade()
{
	retrun(this->grade);
}

Bureaucrat::incrementGrade()
{
	if (this->grade -1 < 1)
		throw (GradeTooHigh());
	this->grade--;
}
Bureaucrat::decrementGrade()
{
	if (this->grade + 1 < 150)
		throw (GradeTooLow());
	this->grade++;
}
