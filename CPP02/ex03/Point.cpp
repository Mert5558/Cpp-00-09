/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:50:50 by merdal            #+#    #+#             */
/*   Updated: 2024/12/02 14:55:09 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{}

Point::Point(const float x, const float y) : x(x), y(y)
{}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{}

Point &Point::operator=(const Point &copy)
{
	if(this == &copy)
		return (*this);

	Point temp(copy);
	std::swap(const_cast<Fixed&>(this->x), const_cast<Fixed&>(temp.x));
	std::swap(const_cast<Fixed&>(this->y), const_cast<Fixed&>(temp.y));
	
	return (*this);
}

Point::~Point()
{}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}
