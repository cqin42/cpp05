/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:40:49 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 15:28:15 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(1)
{
	std::cout << "Bureaucrat Constructor is called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
	std::cout << "Bureaucrat Constructor with parameters is called" << std::endl;
	if (grade > 150)
	{
		throw GradeTooHighException();
	}
	else if (grade < 1)
	{
		throw GradeTooLowException();
	}
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &autre): _name(autre.getName())
{
	std::cout << "Bureaucrat of copy is called." << std::endl;
	this->_grade = autre.getGrade();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &autre)
{
	std::cout << "Bureaucrat of operator = is called." << std::endl;
	if (this != &autre)
	{
		this->_grade = autre.getGrade();
	}
	return (*this);
}


Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor is called." << std::endl;
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}


std::string	const Bureaucrat::getName() const
{
	return (this->_name);
}


void	Bureaucrat::incrementGrade()
{
	if (_grade > 1)
		_grade -= 1;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	if (_grade < 150)
		this->_grade += 1;
	else
		throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}


void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}


void	Bureaucrat::executeForm(const AForm& form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " not executed " << form.getName() << " because " << e.what() << std::endl;
	}

}

std::ostream &operator <<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o<< bureaucrat.getName() << " ,bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (o);
}
