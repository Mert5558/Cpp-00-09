/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:34:28 by merdal            #+#    #+#             */
/*   Updated: 2024/11/25 15:44:10 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};