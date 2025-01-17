/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:07:54 by merdal            #+#    #+#             */
/*   Updated: 2025/01/14 12:39:12 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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

		const	std::string getName();
		int		getGrade();
		void	incrementGrade();
		void	decrementGrade();
};