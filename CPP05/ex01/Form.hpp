/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:50:31 by merdal            #+#    #+#             */
/*   Updated: 2025/01/16 13:11:05 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const	std::string name;
		bool 				sign;
		const int			gradeSign;
		const int			gradeExec;
	
	public:
		Form();
		Form(const Form &copy);
		Form(std::string name, int gradeSign, int gradeExec);
		Form &operator=(const Form &copy);
		~Form();

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

		void	beSigned(const Bureaucrat &bureaucrat);
		
		const	std::string getName() const;
		bool	getSign() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
};

std::ostream &operator<<(std::ostream &os, const Form &form);