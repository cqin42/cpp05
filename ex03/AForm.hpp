/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:21:51 by christine         #+#    #+#             */
/*   Updated: 2024/01/31 18:49:09 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public :
		AForm();
		AForm(std::string name, int gradeSigned, int gradeExecute);
		AForm(AForm const &autre);
		AForm &operator=(AForm const &autre);
		virtual ~AForm();

		virtual void execute(Bureaucrat const& executor) const = 0;

		std::string const getName() const;
		bool isSigned() const;
		int		getGradeSigned() const;
		int		getGradeExecute() const;

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

		class GradeNotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};


	private :
		std::string const _name;
		bool	 _isSign;
		int	const _gradeSigned;
		int	const _gradeExecute;
};

std::ostream &operator <<(std::ostream &o, AForm const &AForm);


#endif
