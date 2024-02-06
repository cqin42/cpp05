/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:11 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 13:00:43 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form form1("form1", 100, 50);
		std::cout << form1 << std::endl;

		Bureaucrat bureaucrat1("bureaucrat1", 70);
		bureaucrat1.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------------------------------------" << std::endl;

	try
	{
		Form form2("form2", 100, 50);
		std::cout << form2 << std::endl;

		Bureaucrat bureaucrat1("bureaucrat2", 110);
		bureaucrat1.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
