/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:38:18 by merdal            #+#    #+#             */
/*   Updated: 2025/01/29 13:09:10 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
	{
        Bureaucrat bob("Bob", 1);
        std::cout << bob << std::endl;
        bob.incrementGrade();
    }
	catch (std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }

    try
	{
        Bureaucrat alice("Alice", 150);
        std::cout << alice << std::endl;
        alice.decrementGrade();
    }
	catch (std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
