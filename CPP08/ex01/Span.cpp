/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:26:19 by merdal            #+#    #+#             */
/*   Updated: 2025/02/21 15:12:39 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): n(0)
{}

Span::Span(unsigned int n): n(n)
{}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		n = copy.n;
		v = copy.v;
	}
	return (*this);
}


Span::~Span()
{}

void Span::addNumber(size_t n)
{
	if (v.size() >= this->n)
		throw SpanFullException();
	v.push_back(n);
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) + v.size() > n)
		throw SpanFullException();
	
	v.insert(v.end(), start, end);
}

unsigned int Span::shortestSpan()
{
	if (v.size() < 2)
		throw NotEnoughNumException();
	
	std::vector<int> sorted = v;
	std::sort(sorted.begin(), sorted.end());

	unsigned int minSpan = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size() - 1; i++)
		minSpan = std::min(minSpan, static_cast<unsigned int>(sorted[i + 1] - sorted[i]));

	return (minSpan);
}

unsigned int Span::longestSpan()
{
	if (v.size() < 2)
		throw NotEnoughNumException();

	std::vector<int>::const_iterator min = std::min_element(v.begin(), v.end());
	std::vector<int>::const_iterator max = std::max_element(v.begin(), v.end());

	return (static_cast<unsigned int>(*max - *min));
}

const char *Span::SpanFullException::what() const throw()
{
	return ("Span is full!");
}

const char *Span::NotEnoughNumException::what() const throw()
{
	return ("Not enough numbers to find a span!");
}
