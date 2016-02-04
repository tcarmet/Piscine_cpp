/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:16:46 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/19 14:36:32 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

public:
	Character( std::string const & name );
	Character( Character const & src );
	virtual	~Character( void );

	Character &	operator=( Character const & rhs );

	void	recoverAP( void );
	void	equip( AWeapon *weapon );
	void	attack( Enemy *enemy );
	bool	haveWeapon( void ) const;

	std::string virtual getName( void ) const;
	int			virtual	getAP( void ) const;
	AWeapon &	getWeapon( void ) const;


private:
	// Character( void );

	std::string _name;
	int			_ap;
	int			_maxAp;
	AWeapon		*_weapon;

};

std::ostream & operator<<( std::ostream & o, Character const & character);

#endif