/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:12:49 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/05 18:13:28 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <sstream>
# include <iostream>
# include <iomanip>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie(void);
		~Zombie(void);
		void set_name(std::string name);
		std::string get_name(void);
		//member functions
		void announce(void);
};

Zombie* newZombie (std::string name);
void randomChump(std::string name);

#endif
