/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:26:31 by merdal            #+#    #+#             */
/*   Updated: 2025/02/21 15:32:10 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "shortest span: " <<sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	
	std::cout << "------------------------------------" << std::endl;
	
	Span range = Span(10);

	std::vector<int> nums = {5, 31, 8, 17, 0, 90, 13, 4, 58, 61};
	range.addRange(nums.begin(), nums.end());

	std::cout << "shortest span: " <<range.shortestSpan() << std::endl;
	std::cout << "longest span: " << range.longestSpan() << std::endl;
	
	return (0);
}