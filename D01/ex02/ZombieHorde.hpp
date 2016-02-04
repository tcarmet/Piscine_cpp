/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/03 18:34:48 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP

# define ZOMBIEHORDE_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump(void);

private:
	std::string _type;
	int _istype;
};

#endif