/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 15:52:56 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 17:23:52 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap( void );
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & src );
	~NinjaTrap( void );

	NinjaTrap & 	operator=( NinjaTrap const & rhs ); 

	void ninjaShoebox( ClapTrap & clap );
	void ninjaShoebox( ScavTrap & scav );
	void ninjaShoebox( FragTrap & frag );
	void ninjaShoebox( NinjaTrap & ninja );

private:
	void	_haduken( std::string target );
	void	_shoryuken( std::string target );
	void	_kamikaze_hit( std::string target );

};


#endif