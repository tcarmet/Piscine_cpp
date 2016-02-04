/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 12:08:26 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:28:28 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		explicit RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target);
		RobotomyRequestForm( RobotomyRequestForm & src);
		~RobotomyRequestForm( void );

		RobotomyRequestForm & operator=( RobotomyRequestForm & rhs );

		std::string 	getTarget( void ) const;
		virtual void	execute( Bureaucrat const & executor ) const;

	private:
		std::string	_target;
};

std::ostream & 			operator<<( std::ostream & o, RobotomyRequestForm const & rhs );

#endif