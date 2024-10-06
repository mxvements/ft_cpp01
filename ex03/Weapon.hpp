/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:12:14 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/06 22:04:44 by luciammielg      ###   ########.fr       */
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
		Weapon(std::string type);
		const std::string &getType(void);
		void setType(const std::string &type);
		
} ;

#endif