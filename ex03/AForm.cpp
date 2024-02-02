/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:21:54 by christine         #+#    #+#             */
/*   Updated: 2024/01/31 18:09:50 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name("default"), _isSign(false), _gradeSigned(42), _gradeExecute(43)
{
	std::cout << "AForm Constructor is called." << std::endl;
}

AForm::AForm(std::string name, int gradeSigned, int gradeExecute): _name(name), _isSign(false), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute)
{
	std::cout << "AForm Constructor is called with parameters." << std::endl;
	if (gradeSigned > 150 || gradeExecute > 150)
		throw GradeTooLowException();
	else if (gradeSigned < 1 || gradeExecute < 1)
		throw GradeTooHighException();
}

AForm::AForm(AForm const &autre): _name(autre._name), _isSign(false), _gradeSigned(autre._gradeSigned), _gradeExecute(autre._gradeExecute)
{
	std::cout << "AForm Constructor of copy is called." << std::endl;
}

AForm &AForm::operator=(AForm const &autre)
{
	std::cout << "AForm Constructor of operator = is called." << std::endl;
	if (this != &autre)
		this->_isSign = autre._isSign;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor is called." << std::endl;
}


std::string const AForm::getName() const
{
	return (_name);
};


bool AForm::isSigned() const
{
	return (_isSign);
};


int		AForm::getGradeSigned() const
{
	return (_gradeSigned);
};


int		AForm::getGradeExecute() const
{
	return (_gradeExecute);
};


void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeSigned)
	{
		_isSign = true;
	}
	else
		throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for the AForm");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for the AForm");
}


const char *AForm::GradeNotSignedException::what() const throw()
{
	return ("Grade is not sign");
}

std::ostream &operator <<(std::ostream &o, AForm const &AForm)
{
	o<< "AForm Name : " << AForm.getName()
	 << "\nIs Signed ? " << AForm.isSigned()
	 << "\nAForm Signed :" << AForm.getGradeSigned()
	 << "\nAForm Execute :" << AForm.getGradeExecute() << std::endl;

	return (o);
}
