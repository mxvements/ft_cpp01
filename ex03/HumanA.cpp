/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:26:35 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/08 20:55:19 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(void){}
HumanA::~HumanA(void) {}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon),
												   _name(name) {}

Weapon &HumanA::getWeapon(void) { return this->_weapon; }

std::string HumanA::getName(void) { return this->_name; }

void HumanA::setWeapon(Weapon &weapon) const { this->_weapon = weapon; }

void HumanA::setName(std::string name) { this->_name = name; }

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
