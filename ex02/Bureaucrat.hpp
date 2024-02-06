/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:58:51 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 14:01:03 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &autre);
		Bureaucrat &operator=(const Bureaucrat &autre);
		~Bureaucrat();

		int	getGrade() const;
		std::string const	getName() const;

		void	incrementGrade();
		void	decrementGrade();

		void	signForm(AForm &form);
		void	executeForm(const AForm& form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private :
		std::string const _name;
		int	_grade;
};

std::ostream &operator <<(std::ostream &o, Bureaucrat const &bureaucrat);

#endif
