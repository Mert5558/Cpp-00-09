/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:46:31 by merdal            #+#    #+#             */
/*   Updated: 2025/02/26 15:12:13 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <string>

class RPN
{
	private:
		std::stack<int> stack;

	public:
		RPN();
		RPN(const RPN &copy);
		RPN &operator=(const RPN &copy);
		~RPN();
		
		int processInput(const std::string &input);
		static bool checkInput(const std::string &input);
		static int calculate(int a, int b, char op);
};