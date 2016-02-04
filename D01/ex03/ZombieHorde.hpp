/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/04 15:04:31 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP

# define ZOMBIEHORDE_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

public:
	ZombieHorde(int N);
	~ZombieHorde(void);
	void announce(void) const;

private:
	int		_numClass;
	Zombie	*_Zombie;
};

#endif