/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:27:11 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/09 19:32:42 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringReplacer.hpp"

StringReplacer::StringReplacer(void){}
StringReplacer::~StringReplacer(void){}
StringReplacer::StringReplacer(std::string filename, std::string to_find, std::string to_replace):
	_filename(filename), _to_find(to_find), _to_replace(to_replace){}

void StringReplacer::set_filename(std::string filename){ this->_filename = filename; }
void StringReplacer::set_to_find(std::string haystack){ this->_to_find = haystack; }
void StringReplacer::set_to_replace(std::string needle){ this->_to_replace = needle; }
void StringReplacer::set_result(std::string result){ this->_result = result; }

std::string StringReplacer::get_filename(void) { return this->_filename; }
std::string StringReplacer::get_to_find(void) { return this->_to_find; }
std::string StringReplacer::get_to_replace(void) { return this->_to_replace; }
std::string StringReplacer::get_result(void){ return this->_result; }

std::string StringReplacer::replace_str(void)
{
	std::string line;
	std::ifstream file;
	if (file.is_open()) {
		std::cerr << "Unable to read file " << this->_filename << std::endl;
	}
	file.open(this->_filename.c_str());
	this->_result.clear();
	
	while (std::getline(file, line))
	{
		std::size_t flag = line.find(this->get_to_find());
		if (flag != std::string::npos) {
			std::string sbstr1 = line.substr(0, flag);
			std::string sbstr2 = line.substr(flag + this->get_to_find().length(), line.length());
			std::string final = sbstr1 + this->get_to_replace() + sbstr2;
			this->set_result(this->get_result() + final + "\n");
		} else {
			this->set_result(this->get_result() + line + "\n");
		}
	}
	std::cout << this->get_result();
	file.close();
	return "";
}
