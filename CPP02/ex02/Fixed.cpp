/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:43:07 by merdal            #+#    #+#             */
/*   Updated: 2024/11/28 14:46:30 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const int intValue)
{
    this->value = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
    this->value = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    if (this != &copy) {
        this->value = copy.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->value) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->value >> fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

// Comparison operators
bool Fixed::operator>(const Fixed &other) const
{
    return this->value > other.value;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->value < other.value;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->value <= other.value;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->value == other.value;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->value != other.value;
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result.value = this->value + other.value;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result.value = this->value - other.value;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result.value = (this->value * other.value) >> fractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    result.value = (this->value << fractionalBits) / other.value;
    return result;
}

// Increment/Decrement operators
Fixed &Fixed::operator++()    // Pre-increment
{
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int)  // Post-increment
{
    Fixed temp = *this;
    this->value++;
    return temp;
}

Fixed &Fixed::operator--()    // Pre-decrement
{
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int)  // Post-decrement
{
    Fixed temp = *this;
    this->value--;
    return temp;
}

// Static member functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}