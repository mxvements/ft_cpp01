/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:26:35 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 21:48:22 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon weapon)
{
	this->_weapon = weapon;
}
HumanA::~HumanA(void){}

Weapon HumanA::get_weapon(void){}

std::string HumanA::get_name(void){}

void HumanA::set_weapon(Weapon weapon){}

void HumanA::set_name(std::string name){}

// functs
void HumanA::attack(void){}
