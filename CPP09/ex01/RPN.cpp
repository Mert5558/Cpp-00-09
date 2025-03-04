/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:37:20 by merdal            #+#    #+#             */
/*   Updated: 2025/03/04 14:53:52 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN &RPN::operator=(const RPN &copy)
{
	if (this != &copy)
		this->stack = copy.stack;
	return (*this);
}


RPN::~RPN()
{}

int RPN::processInput(const std::string &input)
{
	std::stringstream ss(input);
	std::string token;
	
	while (ss >> token)
	{
		if (isdigit(token[0]))
			stack.push(std::atoi(token.c_str()));
		else if (token.length() == 1 && std::string("+-*/").find(token) != std::string::npos)
		{
			if (stack.size() < 2)
			{
				std::cerr << "Error: Not enough operators!" << std::endl;
				exit(1);
			}
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();

			stack.push(calculate(a, b, token[0]));
		}
		else
		{
			std::cerr << "Error: Invalid token! '" << token << "'" << std::endl;
			exit(1);
		}
	}

	if (stack.size() != 1)
	{
		std::cerr << "Error: Invalid RPN expression" << std::endl;
		exit(1);
	}
	return (stack.top());
}

bool RPN::checkInput(const std::string &input)
{
	std::stringstream ss(input);
	std::string token;
	int numCount = 0;
	int opCount = 0;

	while (ss >> token)
	{
		if (isdigit(token[0]))
			numCount++;
		else if (token.length() == 1 && std::string("+-*/").find(token) != std::string::npos)
			opCount++;
		else
			return (false);
	}
	return (numCount > opCount && opCount > 0);
}

int RPN::calculate(int a, int b, char op)
{
	switch (op)
	{
		case '+': return (a + b);
		case '-': return (a - b);
		case '*': return (a * b);
		case '/':
			if (b == 0)
			{
				std::cerr << "Error: Division by zero is not possible!" << std::endl;
				exit(1);
			}
			return (a / b);
		default:
			std::cerr << "Error: unknown operator!" << op << std::endl;
			exit(1);			
	}
}
