/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:26:35 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/06 23:16:01 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(void){}
HumanA::~HumanA(void) {}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon),
												   _name(name) {}

Weapon &HumanA::getWeapon(void) { return this->_weapon; }

std::string HumanA::getName(void) { return this->_name; }

void HumanA::setWeapon(Weapon &weapon) { this->_weapon = weapon; }

void HumanA::setName(std::string name) { this->_name = name; }

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
