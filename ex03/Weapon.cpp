/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:12:16 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/08 20:54:09 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {this->_type = type; }
Weapon::~Weapon(void){}

const std::string &Weapon::getType(void)
{
	return this->_type;
}

void Weapon::setType(const std::string &type)
{
	this->_type = type;
}
