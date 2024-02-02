#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("default", 25, 5), _target("default")
{
	std::cout << "PresidentialPardonForm Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm::AForm(target, 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Constructor with parameter Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &autre): AForm::AForm(autre._target, 25, 5), _target(autre._target)
{
	std::cout << "PresidentialPardonForm Constructor of copy Called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &autre)
{
	std::cout << "PresidentialPardonForm Constructor of operator = Called" << std::endl;
	this->_target = autre._target;
	return (*this);
}


void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getGradeSigned() == false)
		throw AForm::GradeNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw AForm::GradeTooLowException();
	else if (rand() % 2 == 0)
		std::cout << "drilling noises" << std::endl;
	else
		std::cout << "e robotomy failed" << std::endl;
}
