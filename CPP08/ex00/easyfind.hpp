

#pragma once
#include <iostream>
#include <algorithm>

class NotFoundException: public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("Element not found!");
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NotFoundException();
	
	return (it);
}