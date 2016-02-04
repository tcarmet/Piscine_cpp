/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 17:48:36 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/09 19:07:53 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


int		ft_cat_file(char **argv)
{
	int i = 1;
	std::ifstream file;
	std::string buffer;


	while (argv[i])
	{
		file.open(argv[i]);
		if(file.is_open() && file.good())
		{
			while (std::getline(file, buffer))
				std::cout << buffer << std::endl;
		}
		else
			std::cout << "cat: " << argv[i] << ": No such file or directory" << std::endl;
		file.close();
		i++;
	}
	return (0);
}

int		ft_cat_stdin(void)
{
	std::string buffer;

	while (42)
	{
		std::getline(std::cin, buffer);
		if (std::cin.eof())
		{
			std::cout << buffer;
			return (0);
		}
		std::cout << buffer << std::endl;
	}
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
		ft_cat_stdin();
	if (argc >= 1)
		ft_cat_file(argv);
	return 0;
}
