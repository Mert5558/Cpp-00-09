/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:01:40 by merdal            #+#    #+#             */
/*   Updated: 2025/01/28 14:21:20 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        // Create an intern
        Intern johnny;

        // Create some bureaucrats with different grades
        Bureaucrat boss("Boss", 1);
        Bureaucrat middleManager("Middle Manager", 50);
        Bureaucrat newbie("Newbie", 150);

        // Intern creates forms
        AForm* shrubberyForm = johnny.makeForm("shrubbery creation", "Garden");
        AForm* robotomyForm = johnny.makeForm("robotomy request", "Robot");
        AForm* pardonForm = johnny.makeForm("presidential pardon", "Alice");
        //AForm* invalidForm = johnny.makeForm("invalid form", "Nobody");

        std::cout << "\n=== Testing Forms ===\n";

        if (shrubberyForm) {
            // Attempt signing and executing ShrubberyCreationForm
            middleManager.signForm(*shrubberyForm); // Too low to sign
            boss.signForm(*shrubberyForm);          // Boss signs it
            boss.executeForm(*shrubberyForm);       // Boss executes it
        }

        std::cout << "\n";

        if (robotomyForm) {
            // Attempt signing and executing RobotomyRequestForm
            newbie.signForm(*robotomyForm);         // Too low to sign
            boss.signForm(*robotomyForm);           // Boss signs it
            boss.executeForm(*robotomyForm);        // Boss executes it (random success/failure)
        }

        std::cout << "\n";

        if (pardonForm) {
            // Attempt signing and executing PresidentialPardonForm
            middleManager.signForm(*pardonForm);    // Too low to sign
            boss.signForm(*pardonForm);             // Boss signs it
            boss.executeForm(*pardonForm);          // Boss executes it
        }
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}