/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:11 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 12:34:04 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	/*test avec des grades valides*/
	try
	{
		Bureaucrat bureaucrat("test", 50);
		std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
		std::cout << "Increment : " << bureaucrat << std::endl;

		bureaucrat.decrementGrade();
		std::cout << "Decrement : " << bureaucrat << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl;
	/*test1 -> garde valid mais invalid lorsqu'on souhaite le increment*/
	try
	{
		Bureaucrat test1("test1", 1);
		std::cout << test1 << std::endl;

		test1.incrementGrade();
		std::cout << "Increment : " << test1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl;
	/*test2 -> creer un bureaucrat invalid*/
	try
	{
		Bureaucrat test2("test2", 160);
		std::cout << test2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
