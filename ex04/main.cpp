/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:26:39 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/07 20:13:05 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringReplacer.hpp"

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
	//program
	StringReplacer str_replace;
	str_replace.set_filename(argv[1]);
	str_replace.set_to_find(argv[2]);
	str_replace.set_to_replace(argv[3]);
	str_replace.replace_str();
	
	return (0);
}