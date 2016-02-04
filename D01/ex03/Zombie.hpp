/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/04 15:04:27 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP
# include <iostream>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);
	void announce(void) const;

private:
	std::string _name;
	std::string _type;
	int _index;
	int _index2;

};

#endif