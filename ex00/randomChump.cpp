/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:44:38 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 18:16:37 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//created a zombie, name it, and the zombie announces itself
//this function allocates the zombie on the stack, it does not use 'new' keyword
void randomChump(std::string name)
{
	Zombie zombie;
	zombie.set_name(name);
	zombie.announce();
}