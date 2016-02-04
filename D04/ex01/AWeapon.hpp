/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 21:10:39 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 15:17:11 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon {

public:

	AWeapon( std::string const & name, int apcost, int damage );
	AWeapon( AWeapon const & src );
	virtual ~AWeapon( void );

	AWeapon &	operator=( AWeapon const & rhs );

	std::string virtual getName( void ) const;

	int getAPCost( void ) const;
	int getDamage( void ) const;

	virtual void attack( void ) const = 0;

protected:

	std::string _name;
	int		_apcost;
	int		_damage;

private:
	AWeapon( void );

};

#endif