/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:46:26 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 18:09:40 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void)
{
	std::cout << "destructor:" << this->_name << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}
std::string Zombie::get_name(void)
{
	return this->_name;
}

void Zombie::announce(void)
{
	std::cout << Zombie::get_name() << ":BraiiiiiiinnnzzzZ..." << std::endl;
}