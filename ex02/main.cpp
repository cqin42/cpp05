/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:11 by cqin              #+#    #+#             */
/*   Updated: 2024/01/31 18:43:29 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("Bureau", 146);
		ShrubberyCreationForm shrubberyForm("JohnDoe");
		shrubberyForm.execute(bureaucrat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


}
