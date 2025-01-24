/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:03:53 by merdal            #+#    #+#             */
/*   Updated: 2025/01/24 14:22:05 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &shrub);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;		
}