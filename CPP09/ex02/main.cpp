/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:40:06 by merdal            #+#    #+#             */
/*   Updated: 2025/03/03 14:53:03 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <list of positive integers>" << std::endl;
		return 1;
	}

	PmergeMe sorter;
	sorter.parseInput(argv);
	sorter.sort();

	return (0);
}