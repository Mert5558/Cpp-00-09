/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:24:17 by merdal            #+#    #+#             */
/*   Updated: 2024/11/25 12:57:52 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};