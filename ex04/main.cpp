/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:26:39 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/09 19:32:05 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringReplacer.hpp"

static int error_args(void)
{
	std::cerr << "Wrong number of arguments" << std::endl;
	std::cerr << "example of use: ./exec filename s1 s2" << std::endl;
	return (1);
}

/**
 * ./program filename s1 s2
 * 
 * open filename
 * copies the content to a new file, filename.replace
 * replacing all the occurrence of s1 with s2
 * 
 * member functions of the class std::string are allowed 
 * except replace
 * 
 */
int main(int argc, char **argv)
{
	if (argc  != 4)
		return (error_args());
	StringReplacer str_replace(argv[1], argv[2], argv[3]);
	str_replace.replace_str();
	
	return (0);
}