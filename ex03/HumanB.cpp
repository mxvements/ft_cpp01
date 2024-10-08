/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:32:20 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/08 20:54:54 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(void){}

HumanB::~HumanB(void) {}

HumanB::HumanB(std::string name) : _weapon(NULL),
								   _name(name) {}

Weapon *HumanB::getWeapon(void) { return this->_weapon; }

std::string HumanB::getName(void) { return this->_name; }

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

void HumanB::setName(std::string name) { this->_name = name; }

void HumanB::attack(void)
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << "has no weapon" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
