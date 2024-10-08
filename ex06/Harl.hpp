/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:06:56 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/08 20:17:59 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <string>
# include <iostream>
# include <iomanip>

/**
 * use pointer to member functions
 * 
 * syntax examples
 * 		void (Harl::functionName)(std::string param1)
 * 		void (Harl::functionName)(void)
 * 
 * private functions are the level the complain calls
 * 
 * Harl has to complan without using a forest of if/else i/ese
 */
class Harl
{
	private:
		void debug(void){
			std::cout << "[ DEBUG ]\n";
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.";
			std::cout << std::endl;
		};
		void info(void) {
			std::cout << "[ INFO ]\n";
			std::cout << "I cannot believe adding extra bacon costs more money.";
			std::cout << std::endl;
		};
		void warning(void){
			std::cout << "[ WARNING ]\n";
			std::cout << "I think I deserve to have some extra bacon for free.";
			std::cout << std::endl;
		};
		void error(void){
			std::cout << "[ ERROR ]\n";
			std::cout << "This is unacceptable! I want to speak to the manager now.";
			std::cout << std::endl;
		};
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
		void harlFilter(std::string level);
} ;

#endif