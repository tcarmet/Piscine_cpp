/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 16:22:01 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:31:50 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat b1("name1", 1);
	Bureaucrat b2("name2", 150);
	Bureaucrat b3("name3", 10);
	Bureaucrat b4("name4", -3);
	Bureaucrat b5("name5", 151);
	Form	f1("form1", 160, 10);
	Form	f2("form2", 16, 16);
	ShrubberyCreationForm tree("tree");
	PresidentialPardonForm pres("target");
	RobotomyRequestForm robot("target");

	std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl;

	b1.gradeUP();
	std::cout << b1 << std::endl;
	b1.gradeDown();
	std::cout << b1 << std::endl;

	b2.gradeDown();
	std::cout << b2 << std::endl;

	std::cout << std::endl << f2 << std::endl;
	b2.signForm(f2);
	b1.signForm(f2);
	std::cout  << f2 << std::endl << std::endl;

	b1.signForm(tree);
	b1.executeForm(tree);
	b1.signForm(pres);
	b1.executeForm(pres);
	b1.executeForm(robot);
	b1.signForm(robot);
	b1.executeForm(robot);
	return 0;
}
