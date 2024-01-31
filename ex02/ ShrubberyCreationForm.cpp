
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():_target("default")
{
	std::cout << "ShrubberyCreationForm Constructor called." << std::endl;
	Aform(_target, 145, 137);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target)
{
	std::cout << "ShrubberyCreationForm Constructor with parameters called." << std::endl;
	Aform(_target, 145, 137);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &autre): _target(autre._target)
{
	std::cout << "ShrubberyCreationForm Constructor of copy called." << std::endl;
	*this = autre;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &autre): _target(autre._target)
{
	std::cout << "ShrubberyCreationForm Constructor with operator = called." << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}

void ShrubberyCreationFor::execute(Bureaucrat const &executor) const
{
	if (getGradeSigned() == false)
		throw AForm::GradeNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw AForm::GradeTooLowException
	if (executor.getGrade() <= getGradeExecute())
	{
		std::string filename = _target + _shrubbery;
		std::ofstream outFile(filename);

		outfile << "    ###" << std::endl;
		outfile << "   #o###" << std::endl;
		outfile << " #####o###" << std::endl;
		outfile << " #o#\#|#/###" << std::endl;
		outfile << " ###\|/#o#" << std::endl;
		outfile << "  # }|{  #" << std::endl;
		outfile << "    }|{" << std::endl;

		outfile.close();
	}
}
