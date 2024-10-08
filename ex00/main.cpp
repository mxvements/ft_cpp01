/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:11:02 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 18:16:55 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	//allocating zombie on the heap
	Zombie *foo = newZombie("foo1");
	foo->announce();
	delete foo;
	//allocating zombie on the stack, zombie announces itself
	randomChump("foo2");
}