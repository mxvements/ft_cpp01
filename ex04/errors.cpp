/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:26:42 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/07 18:28:44 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringReplacer.hpp"

int error_args(void)
{
	std::cout << "Wrong number of arguments" << std::endl;
	std::cout << "example of use: ./exec filename s1 s2" << std::endl;
	return (1);
}