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


void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getGradeSigned() == false)
		throw AForm::GradeNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw AForm::GradeTooLowException();
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
