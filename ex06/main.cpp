/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:06:28 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/08 20:17:31 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc == 1)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	if (argc == 2)
		harl.harlFilter(argv[1]);
	/*
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		harl.complain("OTHER");
	 */
	return 0;
}