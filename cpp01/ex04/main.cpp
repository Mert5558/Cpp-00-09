/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:05:58 by merdal            #+#    #+#             */
/*   Updated: 2024/11/25 15:26:00 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


void new_file(std::string filename, std::string s1, std::string s2)
{
	if (s1.empty())
	{
		std::cout << "Error: s1 is empty" << std::endl;
		return ;
	}
	
	std::string newFilename = filename + ".replace";
	std::ifstream fileIn(filename);

	if (!fileIn.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}

	std::ofstream fileOut(newFilename);

	if (!fileOut.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}

	std::string line;
	while (std::getline(fileIn, line))
	{
		std::string newLine;
		size_t pos = 0;
		size_t found;
		while ((found = line.find(s1,pos)) != std::string::npos)
		{
			newLine.append(line, pos, found - pos);
			newLine.append(s2);
			pos = found + s1.length();
		}
		newLine.append(line, pos, line.length() - pos);
		fileOut << newLine << std::endl;
	}
	fileIn.close();
	fileOut.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
		new_file(argv[1], argv[2], argv[3]);
	else
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		std::cout << "How to use: ./newfile filename s1 s2" << std::endl;
	}
}