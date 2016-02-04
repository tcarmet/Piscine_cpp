/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 15:48:03 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/24 15:55:40 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

class Base {
public:
	virtual ~Base( void ) { return ; }

};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};

#endif