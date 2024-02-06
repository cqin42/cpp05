#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
	public :
		Intern();
		Intern(std::string target);
		Intern(const Intern &autre);
		Intern &operator=(const Intern &autre);
		~Intern();
		AForm *makeForm(std::string nameForm, std::string targetForm);
};

#endif
