/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 15:41:39 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/24 15:42:29 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>

struct        Data
{
	std::string str;
	int n;
	std::string ptr;
};

void *        serialize(void)
{
	int len = 8;
	std::string name = "";
	char rand_int[4];
	char range[] = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
	std::ifstream random("/dev/urandom");

	random.read(rand_int, 4);
	random.close();

	srand(int(*rand_int));
	while (len){
		name += range[rand() % 62];
		len--;
	}
	len = 8;
	name += rand_int;
	while (len){
		name += range[rand() % 62];
		len--;
	}
	return static_cast<void *>(const_cast<char *>(name.data()));
}

Data*        deserialize(void * raw)
{
	Data *data  = new Data;
	std::string raw_string(static_cast<char *>(raw));
	char * tmp = static_cast<char *>(raw);
	std::cout << "raw data : " << raw_string << std::endl;
	data->str = raw_string.substr(0, 8);
	data->n = tmp[9] << 24;
	data->n += tmp[10] << 16;
	data->n += tmp[11] << 8;
	data->n += tmp[12];
	data->ptr = raw_string.substr(13, 20);
	return data;
}

int            main(void)
{
	Data * data = deserialize(serialize());
	std::cout << data->str << std::endl << data->n << std::endl << data->ptr << std::endl;
	delete(data);
	return 0;
}
