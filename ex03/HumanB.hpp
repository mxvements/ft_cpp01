/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:31:31 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/06 23:26:06 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP

# include <string>
# include <iostream>
# include <iomanip>
#include "Weapon.hpp"

/**
 * HumanB
 * - may not always have a weapon
 * - it may not be armed (important on attack)
 */
class HumanB
{
	private:
		Weapon *_weapon;
		std::string _name;

	public:
		//HumanB(void);
		HumanB(std::string name);
		~HumanB(void);
		Weapon *getWeapon(void);
		std::string getName(void);
		void setWeapon(Weapon &weapon);
		void setName(std::string name);
		void attack(void);
} ;

#endif

