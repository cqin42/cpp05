/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:46 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 16:56:48 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("default", 72, 45), _target("default")
{
	std::cout << "RobotomyRequestForm Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm::AForm(target, 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Constructor with parameter Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &autre): AForm::AForm(autre._target, 72, 45), _target(autre._target)
{
	std::cout << "RobotomyRequestForm Constructor of copy Called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &autre)
{
	std::cout << "RobotomyRequestForm Constructor of operator = Called" << std::endl;
	this->_target = autre._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}


void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));

	if (isSigned() == false)
		throw AForm::GradeNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw AForm::GradeTooLowException();
	else if (rand() % 2 == 0)
		std::cout << "drilling noises" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm &robotomy) {
    o << "Robotomy Request Form: " << robotomy.getName() << ", Signed: " << (robotomy.isSigned() ? "Yes" : "No")
      << ", Grade to Sign: " << robotomy.getGradeSigned() << ", Grade to Execute: " << robotomy.getGradeExecute() << std::endl;
    return o;
}
