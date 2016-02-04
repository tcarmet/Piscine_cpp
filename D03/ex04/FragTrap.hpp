/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 18:32:00 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 15:06:14 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap( std::string name);
	FragTrap( void );
	FragTrap( FragTrap const & src);
	~FragTrap( void );

	FragTrap	& operator=( FragTrap const & rhs );

	void	vaulthunter_dot_exe( std::string const & target );

private:
	
	void	_BigPunch( std::string const & target );
	void	_PussyThrow( std::string const & target );
	void	_LittleFinger( std::string const & target );
	void	_DildoThrow( std::string const & target );
	void	_MassiveHunter( std::string const & target );
};


#endif
