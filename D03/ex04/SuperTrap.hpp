/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 17:34:30 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 18:39:45 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap( void );
	SuperTrap( std::string name );
	SuperTrap( SuperTrap const & src );
	~SuperTrap( void );

	SuperTrap & 	operator=( SuperTrap const & rhs ); 

	// void	meleeAttack( std::string target );
	// void	rangedAttack( std::string target);

	// void	vaulthunter_dot_exe( std::string const & target );

	// void ninjaShoebox( ClapTrap & clap );
	// void ninjaShoebox( ScavTrap & scav );
	// void ninjaShoebox( FragTrap & frag );
	// void ninjaShoebox( NinjaTrap & ninja );

private:

};

#endif