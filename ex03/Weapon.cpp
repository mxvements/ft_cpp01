/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:12:16 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/06 23:14:25 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){}
Weapon::~Weapon(void){}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

const std::string &Weapon::getType(void)
{
	return this->_type;
}

void Weapon::setType(const std::string &type)
{
	this->_type = type;
}
