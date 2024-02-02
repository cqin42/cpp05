#ifndef Intern_HPP
#define Intern_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern : public AForm
{
	public :
		Intern();
		Intern(std::string target);
		Intern(const Intern &autre);
		Intern &operator=(const Intern &autre);
		AForm *makeForm(std::string nameForm, std::string targetForm);
};

#endif
