/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:21:51 by christine         #+#    #+#             */
/*   Updated: 2024/01/30 20:13:10 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

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
		bool const isSigned() const;
		int const	getGradeSigned() const;
		int const	getGradeExecute() const;

		void	beSigned(Bureaucrat bureaucrat);

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
		bool	isSigned;
		int	const _gradeSigned;
		int	const _gradeExecute;
};

std::ostream &operator <<(std::ostream &o, Form const &form);


#endif
