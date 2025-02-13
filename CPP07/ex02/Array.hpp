/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:20:12 by merdal            #+#    #+#             */
/*   Updated: 2025/02/13 14:46:14 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>

class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator=(const Array &copy);
		T &operator[](unsigned int index);
		T &operator[](unsigned int index) const;
		~Array();
	
	 unsigned int size() const;

	 class InvalidIndexException : public std::exception
	 {
		public:
			virtual const char *what() const throw();
	 };

	 private:
	 	unsigned int sizeA;
		T *array;
};

template <typename T>
Array<T>::Array(): sizeA(0), array(new T[0]())
{}

template <typename T>
Array<T>::Array(unsigned int n): sizeA(n), array(new T[n]())
{}

template <typename T>
Array<T>::Array(const Array &copy): sizeA(copy.sizeA), array(new T[copy.sizeA])
{
	for (unsigned int i = 0; i < sizeA; i++)
		array[i] = copy.array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this != copy)
	{
		delete[] array;
		sizeA = copy.sizeA;
		array = new T[sizeA];
		for (unsigned int i = 0; i < sizeA; i++)
			array[i] = copy.array[i];
	}
	return (*this);
}
template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= sizeA)
		throw InvalidIndexException();
	return (array[index]);
}

template <typename T>
T &Array<T>::operator[](unsigned int index) const
{
	if (index >= sizeA)
		throw InvalidIndexException();
	return (array[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (sizeA);
}

template <typename T>
const char *Array<T>::InvalidIndexException::what() const throw()
{
	return ("Array Exception: Index is out of bounds!");
}

template <typename T>
Array<T>::~Array()
{
	delete[] array;
}

