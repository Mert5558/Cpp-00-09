/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:50:31 by merdal            #+#    #+#             */
/*   Updated: 2025/01/20 14:47:32 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const	std::string name;
		bool 				sign;
		const int			gradeSign;
		const int			gradeExec;
	
	public:
		AForm();
		AForm(const AForm &copy);
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm &operator=(const AForm &copy);
		~AForm();

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		class FormNotSigned: public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		void	beSigned(const Bureaucrat &bureaucrat);
		
		const	std::string getName() const;
		bool	getSign() const;
		int		getGradeSign() const;
		int		getGradeExec() const;

		virtual void	execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);