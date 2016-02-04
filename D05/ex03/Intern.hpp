/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 15:49:20 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 15:57:13 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>

class Intern
{
	public:
		Intern( void );
		Intern( Intern & src );
		~Intern( void );

		Intern & 	operator=( Intern & rhs );

		Form*		makeForm( std::string name, std::string target );
};

#endif