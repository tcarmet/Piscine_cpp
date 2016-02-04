/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 16:17:10 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 15:01:06 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	ClapTrap	& operator=( ClapTrap const & rhs );

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	std::string getname( void );
	void	setname( std::string name);
	void	print_status( void );
protected:

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