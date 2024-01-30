/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:40:49 by cqin              #+#    #+#             */
/*   Updated: 2024/01/30 16:24:33 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat():_grade(1)
// {
// 	std::cout << "Bureaucrat Constructor is called." << std::endl;
// }

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	std::cout << "Bureaucrat Constructor with parameters is called" << std::endl;
	if (_grade > 150)
	{
		throw GradeTooHighException();
	}
	else if (_grade < 1)
	{
		throw GradeTooLowException();
	}
	else
		this->_grade = grade;
}

// Bureaucrat::Bureaucrat(const Bureaucrat &autre)
// {
// 	std::cout << "Bureaucrat of copy is called." << std::endl;
// 	if (this != &autre)
// 	{
// 		this->_grade = autre.getGrade();
// 	}
// }

// Bureaucrat &Bureaucrat::operator=(const Bureaucrat &autre)
// {
// 	std::cout << "Bureaucrat of operator = is called." << std::endl;
// 	if (this != &autre)
// 	{
// 		this->_grade = autre.getGrade();
// 	}
// 	return (*this);
// }


Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor is called." << std::endl;
}

int	Bureaucrat::getGrade()
{
	return (this->_grade);
}


std::string	const Bureaucrat::getName()
{
	return (this->_name);
}

