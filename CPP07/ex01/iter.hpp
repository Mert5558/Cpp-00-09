/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:02:39 by merdal            #+#    #+#             */
/*   Updated: 2025/02/10 15:11:35 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void iter(T *array, size_t len, void (*f)(const T &))
{
	if (!array || !f)
		return;
	
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template <typename E>

void printElement(const E &element)
{
	std::cout << element << " ";
}
