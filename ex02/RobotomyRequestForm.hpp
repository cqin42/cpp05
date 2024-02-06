#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private :
		std::string		_target;

	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &autre);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &autre);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;

};

std::ostream &operator <<(std:: ostream &o, RobotomyRequestForm const &robotomy);

#endif
