/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:08:06 by merdal            #+#    #+#             */
/*   Updated: 2025/02/13 14:51:45 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void) copy;
	return (*this);
}


ScalarConverter::~ScalarConverter()
{}

int	ScalarConverter::getType(std::string str)
{
	char *endpointer;
	long l;
	double d;

	if (str.length() == 1 && !isdigit(str[0]))
		return (CHAR);
	
	l = std::strtol(str.c_str(), &endpointer, 10);
	if (*endpointer == '\0')
		return (INT);
	
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (FLOAT);
	
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (DOUBLE);
	
	d = std::strtod(str.c_str(), &endpointer);
	if (*endpointer == 'f' && *(endpointer + 1) == '\0')
		return (FLOAT);

	if (*endpointer == '\0')
		return (DOUBLE);
	
	return (INVALID);
}

void	ScalarConverter::convertChar(std::string str)
{
	char c = str[0];

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	return;
}

void	ScalarConverter::convertInt(std::string str)
{
	char *endptr;
	long num = std::strtol(str.c_str(), &endptr, 10);

	int i = static_cast<int>(num);
	if (i >= -2147483648 || i <= 2147483647)
	{
		char c = static_cast<char>(i);
		if (isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: Impossible" << std::endl;

	if (*endptr != '\0' || num < -2147483648 || num > 2147483647)
	{
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: Impossible" << std::endl;
		std::cout << "double: Impossible" << std::endl;
		return;
	}
	std::cout << "int: " << i << std::endl;

	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	ScalarConverter::convertFloat(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Imposible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		return;
	}

	char *endptr;
	float f = std::strtof(str.c_str(), &endptr);
	int i = static_cast<int>(f);

	if (f < -2147483648 || f > 2147483647 || f != static_cast<int>(f))
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
	}
	else
	{
		if (isprint(i))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		
		std::cout << "int: " << i << std::endl;
	}

	if (*endptr != 'f' || *(endptr + 1) != '\0')
	{
		std::cout << "float: Impossible" << std::endl;
		return;
	}

	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double :" << static_cast<double>(f) << std::endl;

}

void	ScalarConverter::convertDouble(std::string str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Imposible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return;
	}

	char *endptr;
	double d = std::strtod(str.c_str(), &endptr);
	int i = static_cast<int>(d);
	
	if (d < -2147483648 || d > 2147483647 || d != static_cast<int>(d))
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
	}
	else
	{
		if (isprint(i))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

		std::cout << "int: " << i << std::endl;
	}

	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;

	if (*endptr != '\0')
	{
		std::cout << "double: Impossible" << std::endl;
		return;
	}
}

void	ScalarConverter::convert(std::string str)
{
	int type = getType(str);

	switch (type)
	{
		case INVALID:
			std::cout << "input is not valid!" << std::endl;
			break;
		case CHAR:
			convertChar(str);
			break;
		case INT:
			convertInt(str);
			break;
		case FLOAT:
			convertFloat(str);
			break;
		case DOUBLE:
			convertDouble(str);
			break;
	}
}
