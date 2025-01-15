/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:38:18 by merdal            #+#    #+#             */
/*   Updated: 2025/01/09 14:38:53 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat bob("Bob", 150);
		std::cout << bob << std::endl;
		
		bob.decrementGrade(); // Should throw GradeTooLowException
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat alice("Alice", 1);
		std::cout << alice << std::endl;

		alice.incrementGrade(); // Should throw GradeTooHighException
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
