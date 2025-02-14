

#pragma once
#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int n;
		std::vector<int> len;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();

		void addNumber(int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};