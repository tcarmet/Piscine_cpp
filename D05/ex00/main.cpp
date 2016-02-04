/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 16:22:01 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/21 17:44:12 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	Bureaucrat toto("toto", 5);
	Bureaucrat to_low("to low", 151);
	Bureaucrat to_high("to high", 0);

	std::cout << toto;
	while ( toto.getGrade() < 150)
		toto.gradeDown();
	toto.gradeDown();
	std::cout << toto;
	while ( toto.getGrade() > 1 )
		toto.gradeUP();
	toto.gradeUP();
	std::cout << toto;
	return (0);
}