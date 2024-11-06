/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:11:02 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/06 20:28:09 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * own tests  to ensure zombieHorde() funct works as expected
 * call announce() or each one of the zombies
 */
int main(void)
{
	int N = 7;
	Zombie *horde = zombieHorde(N,  "paco");
	for	(int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}