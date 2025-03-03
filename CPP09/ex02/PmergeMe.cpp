/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:39:36 by merdal            #+#    #+#             */
/*   Updated: 2025/03/03 13:06:42 by merdal           ###   ########.fr       */
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

void PmergeMe::mergeInsertionSortVector()
{
	if (vec.size() < 2)
		return;

	std::vector<int> left(vec.begin(), vec.begin() + vec.size() /2);
	std::vector<int> right(vec.begin() + vec.size() / 2, vec.end());
	
	PmergeMe leftSort;
	PmergeMe rightSort;

	leftSort.vec = left;
	rightSort.vec = right;
	
	leftSort.mergeInsertionSortVector();
	rightSort.mergeInsertionSortVector();

	vec.clear();
	std::merge(leftSort.vec.begin(), leftSort.vec.end(),
				rightSort.vec.begin(), rightSort.vec.end(),
				std::back_inserter(vec));
}

void PmergeMe::mergeInsertionSortDeque()
{
	if (deq.size() < 2)
		return;

	std::deque<int> left(deq.begin(), deq.begin() + deq.size() /2);
	std::deque<int> right(deq.begin() + deq.size() / 2, deq.end());
	
	PmergeMe leftSort;
	PmergeMe rightSort;

	leftSort.deq = left;
	rightSort.deq = right;
	
	leftSort.mergeInsertionSortDeque();
	rightSort.mergeInsertionSortDeque();

	deq.clear();
	std::merge(leftSort.deq.begin(), leftSort.deq.end(),
				rightSort.deq.begin(), rightSort.deq.end(),
				std::back_inserter(deq));
}

void PmergeMe::printContainer(std::string when) const
{
	std::cout << when;
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::measureTime()
{
	clock_t start;
	clock_t end;

	printContainer("Before: ");
	start = clock();
	mergeInsertionSortVector();
	end = clock();
	double vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

	start = clock();
	mergeInsertionSortDeque();
	end = clock();
	double dequeTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;
	printContainer("After: ");

	std::cout << "Time to process " << vec.size() << " elements with std::vector: " << vectorTime << " us" << std::endl;
	std::cout << "Time to process " << deq.size() << " elements with std::deque: " << dequeTime << " us" << std::endl;
}
