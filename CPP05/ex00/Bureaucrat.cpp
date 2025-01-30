/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:18:38 by merdal            #+#    #+#             */
/*   Updated: 2025/01/15 14:53:02 by merdal           ###   ########.fr       */
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

Bureaucrat::~Bureaucrat()
{}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is to low!");
}

Bureaucrat::Bureaucrat(std::string name, int grade) :name(name)
{
	if (grade < 1)
		throw (GradeTooHighException());;
	if (grade > 150)
		throw (GradeTooLowException());
	this->grade = grade;
}
const	std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return(this->grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade -1 < 1)
		throw (GradeTooHighException());
	this->grade--;
}
void	Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw (GradeTooLowException());
	this->grade++;
}
