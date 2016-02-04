/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 18:32:00 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/15 15:59:04 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap {

public:
	FragTrap( std::string name);
	FragTrap( void );
	FragTrap( FragTrap const & src);
	~FragTrap( void );

	FragTrap	& operator=( FragTrap const & rhs );

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	vaulthunter_dot_exe( std::string const & target );

	void	print_status( void );

	std::string	getname(void);

private:
	
	void	_BigPunch( std::string const & target );
	void	_PussyThrow( std::string const & target );
	void	_LittleFinger( std::string const & target );
	void	_DildoThrow( std::string const & target );
	void	_MassiveHunter( std::string const & target );

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
