/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:31:33 by merdal            #+#    #+#             */
/*   Updated: 2025/02/10 14:15:50 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct Data
{
	std::string name;
	int value;
}				Data;

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer();
	
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
	private:
		
};