/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:58:51 by cqin              #+#    #+#             */
/*   Updated: 2024/01/29 17:15:12 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(const Bureaucrat &autre);
		Bureaucrat &operator=(const Bureaucrat &autre);
		~Bureaucrat();

		std::string const	getName() const;
		void	GradeTooHighException();
		void	GradeTooLowException();
		int	getGrade()const;

	private :
		std::string const _name;
		int	_grade;
};

#endif
