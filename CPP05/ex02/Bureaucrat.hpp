/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:07:54 by merdal            #+#    #+#             */
/*   Updated: 2025/01/20 14:21:37 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
	private:
		const	std::string name;
		int		grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const *what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const *what(void) const throw();
		};

		const	std::string getName() const;
		int		getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm &form) const;

		void	executeForm(AForm const &form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);