/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 13:34:57 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/15 15:58:43 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap {

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap	&	operator=( ScavTrap const & rhs );

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	challengeNewcomer( void );

	void	print_status( void );

	std::string getname( void );

private:

	std::string _name;

	int _HitPoint;
	int _MaxHitPoint;
	int _EnerPoint;
	int	_MaxEnerPoint;
	int _level;
	int _MeleeAttack;
	int	_RangedAttack;
	int _ArmorReduc;
};

#endif
