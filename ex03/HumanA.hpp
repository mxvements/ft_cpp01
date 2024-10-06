/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:26:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/06 23:16:32 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
#define HUMANA_CPP

# include <string>
# include <iostream>
# include <iomanip>
#include "Weapon.hpp"

/**
 * HumanA
 * - takes weapon on its constructor
 * - it will always be armed (consider this for the attack)
 */
class HumanA
{
	private:
		Weapon &_weapon;
		std::string _name;

	public:
		//HumanA(void);
		~HumanA(void);
		HumanA(std::string name, Weapon &weapon);
		Weapon &getWeapon(void);
		std::string getName(void);
		void setWeapon(Weapon &weapon);
		void setName(std::string name);
		//functs
		void attack(void);
} ;

#endif