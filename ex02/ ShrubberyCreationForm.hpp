/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:52:33 by cqin              #+#    #+#             */
/*   Updated: 2024/01/31 18:49:14 by cqin             ###   ########.fr       */
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

#endif
