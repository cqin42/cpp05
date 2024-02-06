/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:11 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 15:58:58 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat1("bureaucrat1", 100);
		std::cout << bureaucrat1 << std::endl;

		ShrubberyCreationForm shrubbery1("shrubbery1");
		std::cout << shrubbery1 << std::endl;

		bureaucrat1.signForm(shrubbery1);
		bureaucrat1.executeForm(shrubbery1);

		std::cout << "----------------------------------------" << std::endl;

		Bureaucrat bureaucrat2("bureaucrat2", 40);
		std::cout << bureaucrat2 << std::endl;

		RobotomyRequestForm robotomy1("robotomy");
		std::cout << robotomy1 << std::endl;

		bureaucrat2.signForm(robotomy1);
		bureaucrat2.executeForm(robotomy1);

		std::cout << "----------------------------------------" << std::endl;

		Bureaucrat bureaucrat3("bureaucrat3", 2);
		std::cout << bureaucrat3 << std::endl;

		PresidentialPardonForm president("president");
		std::cout << president << std::endl;

		bureaucrat3.signForm(president);
		bureaucrat3.executeForm(president);
		std::cout << "----------------------------------------" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------------------------------------" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	/*with grade no sign*/
	try
	{
		Bureaucrat bureaucrat2("bureaucrat2", 100);
		std::cout << bureaucrat2 << std::endl;

		ShrubberyCreationForm shrubbery2("shrubbery2");
		std::cout << shrubbery2 << std::endl;

		bureaucrat2.executeForm(shrubbery2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------------------------------------" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	/*with grade to high*/
	try
	{
		Bureaucrat bureaucrat2("bureaucrat2", 140);
		std::cout << bureaucrat2 << std::endl;

		RobotomyRequestForm robot2("robot2");
		std::cout << robot2 << std::endl;

		bureaucrat2.signForm(robot2);
		bureaucrat2.executeForm(robot2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
