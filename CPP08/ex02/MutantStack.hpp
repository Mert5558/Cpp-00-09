/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:19:40 by merdal            #+#    #+#             */
/*   Updated: 2025/02/18 15:47:50 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>

class MutantStack: public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack &copy): std::stack<T>(copy) {}
		MutantStack &operator=(const MutantStack &copy)
		{
			if (this != &copy)
				std::stack<T>::operator=(copy);
			return (*this);
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return (this->c.begin());}
		iterator end() {return (this->c.end());}
};
