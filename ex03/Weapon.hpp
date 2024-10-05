/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:12:14 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 21:25:23 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(void);
		~Weapon(void);
		void set_type(std::string type);
		std::string get_type(void);
		//member functs
		const std::string &getType(void);
		void getType(const std::string &type);
		
} ;

#endif