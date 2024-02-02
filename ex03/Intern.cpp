#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Constructor Called" << std::endl;
}

Intern::Intern(const Intern &autre)
{
	std::cout << "Intern Constructor of copy Called" << std::endl;
}

Intern &Intern::operator=(const Intern &autre)
{
	std::cout << "Intern Constructor of operator = Called" << std::endl;
}


AForm *Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (nameForm == forms[i])
		{
			std::cout << "Intern creates " << targetForm << std::endl;

			if (i == 0)
			{
				return (new ShrubberyCreationForm(targetForm));
			}
			else if (i == 1)
			{
				return (new RobotomyRequestForm(targetForm));
			}
			else
			{
				return (new PresidentialPardonForm(targetForm));
			}
		}
	}

	std::cout << "Error name form" << std::endl;
	return (NULL);
}
