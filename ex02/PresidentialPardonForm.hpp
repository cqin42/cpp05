/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:55:40 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 16:55:42 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

std::ostream &operator <<(std:: ostream &o, PresidentialPardonForm const &president);

#endif
