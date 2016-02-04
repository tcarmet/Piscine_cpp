/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 15:58:21 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/09 17:36:58 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.hpp"

int main(void)
{
	Logger log("File_output.txt");

	log.log("file", "message 1 -- test test");
	log.log("console", "message 1 -- test test");
	log.log("file", "message 2 -- test test");
	log.log("console", "message 2 -- test test");
	log.log("file", "message 3 -- test test");
	log.log("console", "message 3 -- test test");
	log.log("file", "message 4 -- test test");
	log.log("console", "message 4 -- test test");
	log.log("file", "message 5 -- test test");
	log.log("console", "message 5 -- test test");
	log.log("file", "message 6 -- test test");
	log.log("console", "message 6 -- test test");
	log.log("file", "message 7 -- test test");
	log.log("console", "message 7 -- test test");
	log.log("file", "message 8 -- test test");
	log.log("console", "message 8 -- test test");
	log.log("file", "message 9 -- test test");
	log.log("console", "message 9 -- test test");
	log.log("file", "message 10 -- test test");
	log.log("console", "message 10 -- test test");
	log.log("file", "message 11 -- test test");
	log.log("console", "message 11 -- test test");
	log.log("file", "message 12 -- test test");
	log.log("console", "message 12 -- test test");
	log.log("file", "message 13 -- test test");
	log.log("console", "message 13 -- test test");
	log.log("file", "message 14 -- test test");
	log.log("console", "message 14 -- test test");
	log.log("file", "message 15 -- test test");
	log.log("console", "message 15 -- test test");
	log.log("file", "message 16 -- test test");
	log.log("console", "message 16 -- test test");

	return (0);
}
