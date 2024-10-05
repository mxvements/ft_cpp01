/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:26:12 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 21:08:53 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

/**
 * pointers and references
 * 	refer objects indirectly on cpp
 * 
 * ptr:
 * 	- declared w/ '*'		int *ptr = &a
 * 	- dereferenced w/ '*'	std::cout << *ptr
 * 	- can be re-assigned
 * 	- can be set tu nulltr
 * 	- can use ptr arithmetic
 * ref:
 * 	- declared w/ '&'		int	&ref = a;
 *	- dereferenced with no special syntax, is like an alias for an obj
 * 	- must be initialized when it is created, cannot be changed to refer to another obj
 * 	- must allways refer to a valid obj, cannot be set tu nullptr
 */
int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;
	
	std::cout << "mem address of str:		" << &str << std::endl;
	std::cout << "mem address held by ptr:	" << ptr << std::endl;
	std::cout << "mem address held by ref:	" << &ref << std::endl;

	std::cout << "value of str:			" << str << std::endl;
	std::cout << "value pointed by ptr:		" << *ptr << std::endl;
	std::cout << "value referened by ref:		" << ref << std::endl;
	
	return (0);
}