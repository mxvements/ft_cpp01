/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:26:12 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 20:50:02 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string& ref = str;
	
	std::cout << "mem address of str:		" << &str << std::endl;
	std::cout << "mem address held by ptr:	" << ptr << std::endl;
	std::cout << "mem address held by ref:	" << &ref << std::endl;

	std::cout << "value of str:			" << str << std::endl;
	std::cout << "value pointed by ptr:		" << *ptr << std::endl;
	std::cout << "value referened by ref:		" << ref << std::endl;
	
	return (0);
}