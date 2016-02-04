/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 14:18:21 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 17:18:51 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_CLASS_HPP
# define FILE_CLASS_HPP
# include <iostream>
# include <fstream>

class File {
public:
	File(char *Filename, char *s1, char *s2);
	~File(void);

private:
	void	_ft_read_file(void);
	bool	_ft_checkfile(void) const;
	void	_ft_change_file(std::string& buffer);
	bool	_replace(std::string& str, const std::string& from, const std::string& to);

	std::string _Filename;
	std::string _s1;
	std::string _s2;
	std::ifstream _file;
	std::ofstream _repFile;
};

#endif