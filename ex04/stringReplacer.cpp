/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:27:11 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/07 21:43:36 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringReplacer.hpp"

/**
 * TODO: initialize variables in the constructor
 */
StringReplacer::StringReplacer(void){}
StringReplacer::~StringReplacer(void){}

void StringReplacer::set_to_find(std::string haystack){ this->_to_find = haystack; }
void StringReplacer::set_to_replace(std::string needle){ this->_to_replace = needle; }
void StringReplacer::set_result(std::string result){ this->_result = result; }
void StringReplacer::set_filename(std::string filename){ this->_filename = filename; }

std::string StringReplacer::get_to_find(void){ return this->_to_find; }
std::string StringReplacer::get_to_replace(void){ return this->_to_replace; }
std::string StringReplacer::get_result(void){ return this->_result; }
std::string StringReplacer::get_filename(void){ return this->_filename; }

/**
 * 1 - check if haytasck contains needle
 * 		std::string::contains()
 * 
 * find()
 * substr()
 * operator+ -> concatenate strings
 */
std::string StringReplacer::replace_str(void)
{
	std::string line;
	std::ifstream file;
	file.open(this->_filename.c_str());
	
	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
		std::size_t flag = line.find(this->get_to_find());
		std::cout << (flag != std::string::npos ? flag : 0) << std::endl; 
		if (flag != std::string::npos) {
			std::string sbstr1 = line.substr(0, flag);
			std::string sbstr2 = line.substr(flag + this->get_to_find().length(), line.length());
			std::string final = sbstr1 + this->get_to_replace() + sbstr2;
			std::cout << "final: " << final << std::endl;
			this->set_result(this->get_result() + final + "\n");
		} else {
			this->set_result(this->get_result() + line + "\n");
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "final text: "<< std::endl;
	std::cout << this->get_result() << std::endl;

	file.close();
	return "";
}
