/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:08:22 by merdal            #+#    #+#             */
/*   Updated: 2025/01/24 15:14:26 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreation", 145, 137), target("undefined")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrub): AForm(shrub.getName(), shrub.getGradeSign(), shrub.getGradeExec()), target(shrub.target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->checkIfSigned(executor);
	
	if (this->getGradeExec() >= executor.getGrade())
	{
		std::ofstream outfile((executor.getName() + "_shrubbery").c_str());
		if (!outfile)
			std::cout << "cannot open file" << std::endl;
		else
		{
			outfile << "					&&& &&  & &&\n";
			outfile << "				&& &ll&l|& ()|/ @,&\n";
			outfile << "			   &ll(/&/&||/& /_/)_&/_&\n";
			outfile << "			  &() &ll&|()|/&ll ''% & ()\n";
			outfile << "			 &_l_&&_l |& |&&/&__%_/_& &&\n";
			outfile << "			&&   && & &| &| /& & % ()& /&&\n";
			outfile << "			()&_---()&l&l|&&-&&--%---()~\n";
			outfile << "				&&     l|||\n";
			outfile << "						|||\n";
			outfile << "						|||\n";
			outfile << "						|||\n";
			outfile << "					, -=-~  .-^- _\n";
			outfile.close();
		}
	}
	else
		throw(GradeTooLowException());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}