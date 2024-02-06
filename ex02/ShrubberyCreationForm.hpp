/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:03 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 16:56:05 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class AForm;
class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &autre);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &autre);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;

	private :
		std::string		_target;

};

std::ostream &operator <<(std:: ostream &o, ShrubberyCreationForm const &shrubbery);

#endif
