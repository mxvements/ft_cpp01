/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:12:16 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 21:25:38 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){}

Weapon::~Weapon(void){}

void Weapon::set_type(std::string type)
{
	this->_type =  type;
}

std::string Weapon::get_type(void)
{
	return this->_type;
}

// member functs

const std::string &Weapon::getType(void)
{
	const std::string &ref = this->_type;
	return ref;
}

void Weapon::getType(const std::string &type)
{
	this->_type = type;
}
