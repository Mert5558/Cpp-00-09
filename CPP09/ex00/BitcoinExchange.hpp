/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:44:23 by merdal            #+#    #+#             */
/*   Updated: 2025/02/25 14:18:14 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <limits>

class BitcoinExchange
{
	private:
		std::map<std::string, double> datamap;
 
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		void readData(std::string file);
		void readInput(std::string file);
		double getExchangeRate(const std::string &date)const;
		static bool isValidDate(const std::string &date);
		static bool isValidValue(const std::string &value);
};