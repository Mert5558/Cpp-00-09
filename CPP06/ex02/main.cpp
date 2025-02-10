/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:59:24 by merdal            #+#    #+#             */
/*   Updated: 2025/02/10 14:31:01 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *instance = generate();

    std::cout << "Identify by pointer: ";
    identify(instance);

    std::cout << "Identify by reference: ";
    identify(*instance);

    delete (instance);
    return (0);
}
