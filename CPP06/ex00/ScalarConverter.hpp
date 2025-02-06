/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:18:20 by merdal            #+#    #+#             */
/*   Updated: 2025/02/06 12:35:13 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <limits>
#include <cctype>
#include <cstdlib>

enum types
{
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	INVALID
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &copy);
		~ScalarConverter();

		static int		getType(std::string str);
		static void		convertChar(std::string str);
		static void		convertInt(std::string str);
		static void		convertFloat(std::string str);
		static void		convertDouble(std::string str);
		
	public:
		static void		convert(std::string str);
		
};
