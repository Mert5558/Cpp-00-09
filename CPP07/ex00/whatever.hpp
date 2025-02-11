/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:42:12 by merdal            #+#    #+#             */
/*   Updated: 2025/02/10 14:56:27 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>

void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename Mi>

const Mi &min(const Mi &x, const Mi &y)
{
	return (x < y ? x : y);
}

template <typename Ma>

const Ma &max(const Ma &x, const Ma &y)
{
	return (x > y ? x : y);
}
