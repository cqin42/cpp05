/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:21:54 by christine         #+#    #+#             */
/*   Updated: 2024/02/06 14:16:27 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default"), _isSigned(false), _gradeSigned(42), _gradeExecute(43)
{
	std::cout << "Form Constructor is called." << std::endl;
}

Form::Form(std::string name, int gradeSigned, int gradeExecute): _name(name), _isSigned(false), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute)
{
	std::cout << "Form Constructor is called with parameters." << std::endl;
	if (gradeSigned > 150 || gradeExecute > 150)
		throw GradeTooLowException();
	else if (gradeSigned < 1 || gradeExecute < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &autre): _name(autre._name), _isSigned(false), _gradeSigned(autre._gradeSigned), _gradeExecute(autre._gradeExecute)
{
	std::cout << "Form Constructor of copy is called." << std::endl;
}

Form &Form::operator=(Form const &autre)
{
	std::cout << "Form Constructor of operator = is called." << std::endl;
	if (this != &autre)
		this->_isSigned = autre._isSigned;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor is called." << std::endl;
}


std::string const Form::getName() const
{
	return (_name);
};


bool Form::isSigned() const
{
	return (_isSigned);
};


int		Form::getGradeSigned() const
{
	return (_gradeSigned);
};


int		Form::getGradeExecute() const
{
	return (_gradeExecute);
};


void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeSigned)
	{
		_isSigned = true;
	}
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for the Form");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for the Form");
}


// const char *Form::GradeNotSignedException::what() const throw()
// {
// 	return ("Grade is not sign");
// }

std::ostream &operator <<(std::ostream &o, Form const &Form)
{
	o<< "Form Name : " << Form.getName()
	 << " ,Is Signed ? " << (Form.isSigned() ? "Yes" : "No")
	 << " ,Form Signed :" << Form.getGradeSigned()
	 << " ,Form Execute :" << Form.getGradeExecute() << std::endl;

	return (o);
}
