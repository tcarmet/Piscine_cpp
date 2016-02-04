/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 17:28:09 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 19:31:10 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Human use melee attack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Human use ranged attack on " << target << std::endl;
}
void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "FUS ROH DAH " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	typedef void (Human::*fnPtr)(std::string const &);
	std::string		output[] = {"melee", "ranged", "intimidating"};
	fnPtr				functions[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	int	i = 0;

	while (i < 3)
	{
		if (output[i] == action_name)
		{
			(this->*functions[i])(target);
			return ;
		}
		i++;
	}
}
