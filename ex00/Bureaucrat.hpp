/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:58:51 by cqin              #+#    #+#             */
/*   Updated: 2024/01/30 16:23:29 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public :
		// Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		// Bureaucrat(const Bureaucrat &autre);
		// Bureaucrat &operator=(const Bureaucrat &autre);
		~Bureaucrat();

		int	getGrade();
		std::string const	getName();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too low");
				}
		};

	private :
		std::string const &_name;
		int	_grade;
};

#endif
