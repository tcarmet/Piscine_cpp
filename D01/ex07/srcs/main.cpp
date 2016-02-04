/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 14:04:41 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 15:01:25 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "File.class.hpp"

int main(int argc, char **argv)
{

	if (argc == 4)
	{
		File *file;
		file = new File(argv[1], argv[2], argv[3]);
		delete file;
	}
	else
		std::cout << "error arguments" << std::endl;
	return (0);
}
