/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:18:20 by merdal            #+#    #+#             */
/*   Updated: 2025/02/04 13:31:44 by merdal           ###   ########.fr       */
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
		void		convert(std::string str);
		static int	getType(std::string str);
		void		convertChar(std::string str);
		void		convertInt(std::string str);
		void		convertFloat(std::string str);
		void		convertDouble(std::string str);
		
	public:
		
};
