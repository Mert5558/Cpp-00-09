/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:57:27 by merdal            #+#    #+#             */
/*   Updated: 2025/02/10 14:23:56 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Serializer s;
	Data data;
	Data *ptr;

	data.name = "Johnny";
	data.value = 42;
	ptr = &data;

	std::cout << "Data: " << ptr->name << " " << ptr->value << std::endl;

	uintptr_t raw = s.serialize(ptr);
	std::cout << "Raw: " << raw << std::endl;

	Data *ptr2 = s.deserialize(raw);
	std::cout << "Data: " << ptr2->name << " " << ptr2->value << std::endl;

	return (0);
}
