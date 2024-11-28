/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:35:16 by merdal            #+#    #+#             */
/*   Updated: 2024/11/26 15:14:09 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		// Copy constructor
		Fixed(const Fixed &copy);
		// Assignation operator overload
		Fixed &operator=(const Fixed &copy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
};