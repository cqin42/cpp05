/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:11 by cqin              #+#    #+#             */
/*   Updated: 2024/01/30 19:19:56 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("test", 42);
		std::cout << bureaucrat.getName() << " ,bureaucrat grade " << bureaucrat.getGrade() << std::endl;

		bureaucrat.decrementGrade();
		std::cout << bureaucrat.getName() << " ,bureaucrat grade " << bureaucrat.getGrade() << std::endl;

		bureaucrat.incrementGrade();
		std::cout << bureaucrat.getName() << " ,bureaucrat grade " << bureaucrat.getGrade() << std::endl;

		Bureaucrat bureaucrat("invalid", 0); // throw
		//Bureaucrat bureaucrat("invalid", 151); // throw

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
