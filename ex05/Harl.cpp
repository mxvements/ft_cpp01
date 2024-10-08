/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:16:45 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/08 19:52:39 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){};
Harl::~Harl(void){};

void Harl::complain(std::string level)
{
	std::string levels[4] = {
		"debug",
		"info",
		"warning",
		"error"
	}; 
	
	void (Harl::*levelsPtr[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	} ;

	//find idx from the array
	for (int i = 0; i < (int)levels->size(); i++) {
		if (levels[i] == level) {
			return (this->*levelsPtr[i])();
		} else if (i == (int)levels->size() - 1) {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
		}
	}
}
