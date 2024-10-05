/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:44:09 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 18:05:54 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//creates a zombie, name it, and return it so you can use it outsie of the function scope;
// this function alloccates the zombie on the heap (ptr)
Zombie* newZombie (std::string name)
{
	Zombie *zombie = new Zombie();
	zombie->set_name(name);
	return (zombie);
}