/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:38:51 by merdal            #+#    #+#             */
/*   Updated: 2025/03/03 14:52:42 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <ctime>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> deq;
	
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);
		~PmergeMe();

	void parseInput(char **argv);
	void mergeInsertionSortVector(std::vector<int> &arr);
	void mergeInsertionSortDeque(std::deque<int> &arr);
	void printContainer(std::string when) const;
	void sort();
	static bool isValidNum(const std::string &str);
};