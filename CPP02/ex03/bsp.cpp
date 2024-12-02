/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:02:12 by merdal            #+#    #+#             */
/*   Updated: 2024/12/02 14:41:19 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <cmath>

float area(Point const a, Point const b, Point const c)
{
    return std::abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
                     b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                     c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float areaABC = area(a, b, c);

    float areaPAB = area(point, a, b);
    float areaPBC = area(point, b, c);
    float areaPCA = area(point, c, a);

    if (areaABC == areaPAB + areaPBC + areaPCA)
		return true;
	else
		return false;
}