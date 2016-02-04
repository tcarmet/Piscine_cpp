/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/02 15:19:31 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/03 18:35:10 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>
#include <iomanip>

class Pony {

public:
	void	CallmeMaybe(std::string name, std::string food);
	Pony(void);
	~Pony(void);
private:
	int _count;

};

#endif