/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:38:43 by merdal            #+#    #+#             */
/*   Updated: 2025/01/16 14:09:44 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("noName"), sign(false), gradeSign(1), gradeExec(1)
{}

Form::Form(const Form &copy): name(copy.name), sign(false), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec)
{}

Form::Form(std::string name, int gradeSign, int gradeExec): name(name), sign(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign > 150)
		throw (GradeTooHighException());
	if (gradeSign < 1)
		throw (GradeTooLowException());
	if (gradeExec > 150)
		throw (GradeTooHighException());
	if (gradeExec < 1)
		throw (GradeTooLowException());
}

Form &Form::operator=(const Form &copy)
{
	if (this != &copy)
	{
		this->sign = copy.sign;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form: " << form.getName() << ", Sign status: " << (form.getSign() ? "Signed" : "Not signed")
	   << ", Grade required to sign: " << form.getGradeSign()
	   << ", Grade required to execute: " << form.getGradeExec();
	return os;
}

Form::~Form()
{}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->sign);
}

int	Form::getGradeExec() const
{
	return (this->gradeExec);
}

int	Form::getGradeSign() const
{
	return (this->gradeSign);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSign)
		throw(GradeTooLowException());
	this->sign = true;
}
