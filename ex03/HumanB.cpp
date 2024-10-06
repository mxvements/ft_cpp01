/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:32:20 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/06 23:29:36 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(void){}

HumanB::~HumanB(void) {}

HumanB::HumanB(std::string name) : _weapon(nullptr),
								   _name(name) {}

Weapon *HumanB::getWeapon(void) { return this->_weapon; }

std::string HumanB::getName(void) { return this->_name; }

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

void HumanB::setName(std::string name) { this->_name = name; }

void HumanB::attack(void)
{
	if (this->_weapon == nullptr)
	{
		std::cout << this->_name << "has no weapon" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
