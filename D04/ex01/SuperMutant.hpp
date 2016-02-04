/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:15:28 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 14:30:57 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant( void );
	SuperMutant( SuperMutant const & src );
	virtual ~SuperMutant( void );

	SuperMutant & 	operator=( SuperMutant const & rhs );

	virtual void	takeDamage( int damage );
};

#endif