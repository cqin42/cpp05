/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:11 by cqin              #+#    #+#             */
/*   Updated: 2024/02/06 16:41:39 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;

	AForm* rrf;
	AForm* rrf1;
	AForm* rrf2;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf1 = someRandomIntern.makeForm("shrubbery creation", "Bender1");
	rrf2 = someRandomIntern.makeForm("presidential pardon", "Bender2");

	std::cout << *rrf << std::endl;
	std::cout << *rrf1 << std::endl;
	std::cout << *rrf2 << std::endl;

	delete rrf;
	delete rrf1;
	delete rrf2;
}
