/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:15:28 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 15:17:02 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {

public:

	Enemy( int hp, std::string const & type );
	Enemy( Enemy const & src );
	virtual ~Enemy( void );

	Enemy &	operator=( Enemy const & rhs );

	std::string virtual getType( void ) const;

	int getHP( void ) const;

	virtual void takeDamage( int damage );

protected:
	
	int _hitpoint;
	std::string	_type;

private:
	Enemy( void );
};

#endif
