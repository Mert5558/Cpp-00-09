/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:38:42 by merdal            #+#    #+#             */
/*   Updated: 2025/03/04 13:39:53 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	if (this != &copy)
	{
		this->datamap = copy.datamap;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{}


void BitcoinExchange::readData(std::string file)
{
	std::ifstream dataFile(file);
	if (!dataFile)
	{
		std::cerr << "Error: cannot open file!" << file << std::endl;
		exit(1);
	}

	std::string line;
	std::string date;
	double 		rate;

	std::getline(dataFile, line);
	
	while (std::getline(dataFile, line))
	{
		std::stringstream ss(line);
		if (std::getline(ss, date, ',') && ss >> rate)
		{
			datamap[date] = rate;
		}
		else
			std::cerr << "Error: Invalid data format in " << file << std::endl;
	}
}

void BitcoinExchange::readInput(std::string file)
{
	std::ifstream inputFile(file);
	if (!inputFile)
	{
		std::cerr << "Error: cannot open input file!" << std::endl;
		exit(1);
	}

	std::string line;
	std::string date;
	std::string valueStr;

	while (std::getline(inputFile, line))
	{
		std::stringstream ss(line);
		if (!std::getline(ss, date, '|') || !(ss >> valueStr))
		{
			std::cerr << "Error: Bad input1 => " << line << std::endl;
			continue;
		}

		date.erase(date.find_last_not_of(" \t") + 1);
		valueStr.erase(0, valueStr.find_first_not_of(" \t"));

		if (!isValidDate(date))
		{
			std::cerr << "Error: Bad input2 => " << date << std::endl;
			continue;
		}

		if (!isValidValue(valueStr))
		{
			std::cerr << "Error: Not a valid number! => " << valueStr << std::endl;
			continue;
		}
		
		double value = std::atof(valueStr.c_str());

		double rate = getExchangeRate(date);
		if (rate != -1)
			std::cout << date << " => " << value << " = " << (value *rate) << std::endl;
	}
}

double BitcoinExchange::getExchangeRate(const std::string &date) const
{
	std::map<std::string, double>::const_iterator it = datamap.lower_bound(date);

	if (it == datamap.end() || it->first != date)
	{
		if (it == datamap.begin())
		{
			std::cerr << "Error: No exchange rate available for " << date << std::endl;
			return(-1);
		}
		--it;
	}
	return (it->second);
}

bool BitcoinExchange::isValidDate(const std::string &date)
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (false);

	int year;
	int month;
	int day;

	if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		return (false);

	if (month < 1 || month > 12)
		return (false);
	
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (day < 1 || day > daysInMonth[month - 1])
		return (false);

	return (true);
}

bool BitcoinExchange::isValidValue(const std::string &value)
{
	char *end;
	double num = std::strtod(value.c_str(), &end);

	if (*end != '\0' || num < 0 || num > 1000)
		return (false);
	return (true);
}