/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 14:05:16 by tcarmet           #+#    #+#             */
/*   Updated: 2015/08/28 15:50:58 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include "ContactClass.hpp"
# define FALSE 0
# define TRUE 1


void	print_info(std::string info);
void	ft_print_tab(std::string Index, std::string Name, 
	std::string Last_name, std::string Nickname);
void	ft_putprompt(void);

#endif