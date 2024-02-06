/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:21:51 by christine         #+#    #+#             */
/*   Updated: 2024/02/06 12:52:06 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :
		Form();
		Form(std::string name, int gradeSigned, int gradeExecute);
		Form(Form const &autre);
		Form &operator=(Form const &autre);
		~Form();

		std::string const getName() const;
		bool isSigned() const;
		int	getGradeSigned() const;
		int getGradeExecute() const;

		void	beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};


	private :
		std::string const _name;
		bool	_isSigned;
		int	const _gradeSigned;
		int	const _gradeExecute;
};

std::ostream &operator <<(std::ostream &o, Form const &form);


#endif
