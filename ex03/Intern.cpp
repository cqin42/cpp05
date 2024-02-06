/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:17 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 16:56:19 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Constructor Called" << std::endl;
}

Intern::Intern(const Intern &autre)
{
	(void)autre;
	std::cout << "Intern Constructor of copy Called" << std::endl;
}

Intern &Intern::operator=(const Intern &autre)
{
	std::cout << "Intern Constructor of operator = Called" << std::endl;
	if (this != &autre)
		;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destructor Called." << std::endl;
}

AForm *Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (nameForm == forms[i])
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			switch(i){
				case 0:
					return (new ShrubberyCreationForm(targetForm));
				case 1:
					return (new RobotomyRequestForm(targetForm));
				case 2:
					return (new PresidentialPardonForm(targetForm));
				default:
					break;
			}

		}
	}

	std::cout << "Error name form" << std::endl;
	return (NULL);
}
