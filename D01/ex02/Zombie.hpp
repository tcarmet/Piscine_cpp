/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/03 17:44:45 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP
# include <iostream>

class Zombie {

public:
	Zombie(std::string name, std::string type);
	~Zombie(void);
	void announce(void);

private:
	std::string _name;
	std::string _type;

};

#endif