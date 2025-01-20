/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:38:18 by merdal            #+#    #+#             */
/*   Updated: 2025/01/16 13:09:45 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		// Create a Bureaucrat with a moderate grade
		Bureaucrat alice("Alice", 50);
		std::cout << alice << std::endl;

		// Create a Form with specific signing and execution requirements
		Form taxForm("Tax Form", 45, 100);
		std::cout << taxForm << std::endl;

		// Attempt to sign the form with a grade that's too low
		alice.signForm(taxForm);

		// Improve Alice's grade
		alice.incrementGrade(); // 50 -> 49
		std::cout << alice << std::endl;

		// Try signing the form again
		alice.signForm(taxForm);
		std::cout << taxForm << std::endl;

		// Create a Bureaucrat with a very high grade (close to 1)
		Bureaucrat boss("Boss", 1);
		std::cout << boss << std::endl;

		// Create another form with strict requirements
		Form secretForm("Secret Document", 1, 1);
		std::cout << secretForm << std::endl;

		// Boss signs the form easily
		boss.signForm(secretForm);
		std::cout << secretForm << std::endl;

	} catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		// Attempt to create a form with invalid grades
		Form invalidForm("Invalid Form", 0, 160); // Should throw exception
		std::cout << invalidForm << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		// Attempt to create a Bureaucrat with an invalid grade
		Bureaucrat invalidBureaucrat("Invalid", 151); // Should throw exception
		std::cout << invalidBureaucrat << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
