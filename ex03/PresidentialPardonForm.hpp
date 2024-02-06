#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class AForm;
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private :
		std::string		_target;

	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &autre);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &autre);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;

};

#endif
