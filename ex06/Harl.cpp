/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:16:45 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/09 17:29:06 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {};
Harl::~Harl(void) {};

static int get_level(std::string level)
{
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};

	// find idx from the array
	for (int i = 0; i < (int)levels->size(); i++)
	{
		if (levels[i] == level)
			return i;
	}
	return (-1);
}

void Harl::complain(std::string level)
{
	int idx = get_level(level);

	void (Harl::*levelsPtr[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};
	if (idx >= 0)
		return ((this->*levelsPtr[idx])());
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return;
}

void Harl::harlFilter(std::string level)
{
	int idx = get_level(level);
	switch (idx)
	{
		case 0:
			this->complain("DEBUG");
		case 1:
			this->complain("INFO");
		case 2:
			this->complain("WARNING");
		case 3:
			this->complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
