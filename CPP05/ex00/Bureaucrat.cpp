/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:18:38 by merdal            #+#    #+#             */
/*   Updated: 2025/01/14 12:39:19 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name("NoName"),grade(1)
{}


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

Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is to low!");
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	if (grade < 1)
		throw (GradeTooHighException());;
	if (grade > 150)
		throw (GradeTooLowException());
	this->grade = grade;
}
const	std::string	Bureaucrat::getName()
{
	return (this->name);
}

int	Bureaucrat::getGrade()
{
	return(this->grade);
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
