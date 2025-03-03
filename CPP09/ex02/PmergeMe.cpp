/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:39:36 by merdal            #+#    #+#             */
/*   Updated: 2025/03/03 14:52:34 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy)
	{
		this->vec = copy.vec;
		this->deq = copy.deq;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{}

bool PmergeMe::isValidNum(const std::string &str)
{
	if (str.empty() || (str[0] == '0' && str.length() > 1))
		return (false);
	return (std::all_of(str.begin(), str.end(), ::isdigit));
}

void PmergeMe::parseInput(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		std::string numStr = argv[i];
		if (!isValidNum(numStr))
		{
			std::cerr << "Error: Invalid number: " << numStr << std::endl;
			exit(1);
		}
		int num = std::atoi(numStr.c_str());
		vec.push_back(num);
		deq.push_back(num);
	}
}

void PmergeMe::mergeInsertionSortVector(std::vector<int> &arr)
{
	if (arr.size() <= 1)
		return;
	if (arr.size() == 2)
	{
		if (arr[0] > arr[1])
			std::swap(arr[0], arr[1]);
		return;
	}

	std::vector<int> winners;
	std::vector<int> losers;

	size_t i = 0;
	
	for(; i + 1 < arr.size(); i+= 2)
	{
		if (arr[i] < arr[i+1])
		{
			winners.push_back(arr[i+1]);
			losers.push_back(arr[i]);
		}
		else
		{
			winners.push_back(arr[i]);
			losers.push_back(arr[i+1]);
		}
	}
	
	if (i < arr.size())
		winners.push_back(arr[i]);
	
	mergeInsertionSortVector(winners);

	for(size_t j = 0; j < losers.size(); j++)
	{
		int val = losers[j];
		auto it = std::lower_bound(winners.begin(), winners.end(), val);
		winners.insert(it, val);
	}
	arr = winners;
}

void PmergeMe::mergeInsertionSortDeque(std::deque<int> &arr)
{
	if (arr.size() <= 1)
		return;
	if (arr.size() == 2)
	{
		if (arr[0] > arr[1])
			std::swap(arr[0], arr[1]);
		return;
	}

	std::deque<int> winners;
	std::deque<int> losers;

	size_t i = 0;
	
	for(; i + 1 < arr.size(); i+= 2)
	{
		if (arr[i] < arr[i+1])
		{
			winners.push_back(arr[i+1]);
			losers.push_back(arr[i]);
		}
		else
		{
			winners.push_back(arr[i]);
			losers.push_back(arr[i+1]);
		}
	}
	
	if (i < arr.size())
		winners.push_back(arr[i]);
	
	mergeInsertionSortDeque(winners);

	for(size_t j = 0; j < losers.size(); j++)
	{
		int val = losers[j];
		auto it = std::lower_bound(winners.begin(), winners.end(), val);
		winners.insert(it, val);
	}
	arr = winners;
}

void PmergeMe::printContainer(std::string when) const
{
	std::cout << when;
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::sort()
{
	clock_t start;
	clock_t end;

	printContainer("Before: ");
	std::vector<int> vecCopy = vec;
	start = clock();
	mergeInsertionSortVector(vecCopy);
	end = clock();
	double vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

	std::deque<int> deqCopy = deq;
	start = clock();
	mergeInsertionSortDeque(deqCopy);
	end = clock();
	double dequeTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

	vec = vecCopy;
	deq.assign(deqCopy.begin(), deqCopy.end());
	
	printContainer("After: ");

	std::cout << "Time to process " << vec.size() << " elements with std::vector: " << vectorTime << " us" << std::endl;
	std::cout << "Time to process " << deq.size() << " elements with std::deque: " << dequeTime << " us" << std::endl;
}
