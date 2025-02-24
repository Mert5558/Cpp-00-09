/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:26:23 by merdal            #+#    #+#             */
/*   Updated: 2025/02/21 15:11:57 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		unsigned int n;
		std::vector<int> v;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();

		void addNumber(size_t n);
		void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();

		class SpanFullException: public std::exception
		{
			public:
				const char* what() const throw();
		};

		class NotEnoughNumException: public std::exception
		{
			public:
				const char *what() const throw();
		};
};