
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("default", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm::AForm(target, 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Constructor with parameters called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &autre): AForm::AForm(autre._target, 145, 137)
{
	std::cout << "ShrubberyCreationForm Constructor of copy called." << std::endl;
	this->_target = autre._target;
	*this = autre;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &autre)
{
	std::cout << "ShrubberyCreationForm Constructor with operator = called." << std::endl;
	this->_target = autre._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getGradeSigned() == false)
		throw AForm::GradeNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw AForm::GradeTooLowException();
	if (executor.getGrade() <= getGradeExecute())
	{
		std::string filename = _target + "_shrubbery";
		std::ofstream outfile;
		outfile.open(filename.c_str());

		outfile << "    ###" << std::endl;
		outfile << "   #o###" << std::endl;
		outfile << " #####o###" << std::endl;
		outfile << " #o#\\#|#/###" << std::endl;
		outfile << " ###\\|/#o#" << std::endl;
		outfile << "  # }|{  #" << std::endl;
		outfile << "    }|{" << std::endl;

		outfile.close();
	}
}
