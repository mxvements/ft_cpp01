/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:31:31 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 21:31:57 by luciama2         ###   ########.fr       */
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
 * - takes weapon on its constructor
 * - it will always be armed (consider this for the attack)
 */
class HumanB
{
	private:
		Weapon _weapon;
		std::string _name;

	public:
		HumanB(void);
		~HumanB(void);
		Weapon get_weapon(void);
		std::string get_name(void);
		void set_weapon(Weapon weapon);
		void set_name(std::string name);
		//functs
		void attack(void);
} ;

#endif