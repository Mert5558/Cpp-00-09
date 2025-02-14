

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
		this->n = copy.n;
		this->len = copy.len;
	}
	return (*this);
}


Span::~Span()
{}

void Span::addNumber(int n)
{
	if ()
}