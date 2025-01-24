/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:38:43 by merdal            #+#    #+#             */
/*   Updated: 2025/01/24 14:33:05 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("noName"), sign(false), gradeSign(1), gradeExec(1)
{}

AForm::AForm(const AForm &copy): name(copy.name), sign(false), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec)
{}

AForm::AForm(std::string name, int gradeSign, int gradeExec): name(name), sign(false), gradeSign(gradeSign), gradeExec(gradeExec)
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

AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy)
	{
		this->sign = copy.sign;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << "Form: " << form.getName() << ", Sign status: " << (form.getSign() ? "Signed" : "Not signed")
	   << ", Grade required to sign: " << form.getGradeSign()
	   << ", Grade required to execute: " << form.getGradeExec();
	return os;
}

AForm::~AForm()
{}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("Form can not be signed!");
}

const std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSign() const
{
	return (this->sign);
}

int	AForm::getGradeExec() const
{
	return (this->gradeExec);
}

int	AForm::getGradeSign() const
{
	return (this->gradeSign);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSign)
		throw(GradeTooLowException());
	this->sign = true;
}

void	AForm::checkIfSigned(const Bureaucrat &executor) const
{
	if (this->sign == false)
		throw(AForm::FormNotSigned());
	if (executor.getGrade() > this->getGradeExec())
		throw(AForm::GradeTooLowException());
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (this->sign == false)
		throw(AForm::FormNotSigned());
	if (executor.getGrade() > this->getGradeExec())
		throw (AForm::GradeTooLowException());
	else
		std::cout << "Bureaucrat: " << executor.getName() << " executed form: " << this->getName() << std::endl;
}
