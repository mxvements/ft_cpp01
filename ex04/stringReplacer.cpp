/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:27:11 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/09 15:23:08 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringReplacer.hpp"

StringReplacer::StringReplacer(void) {}
StringReplacer::~StringReplacer(void) {}
StringReplacer::StringReplacer(
	std::string filename,
	std::string to_find,
	std::string to_replace) : _if_filename(filename),
							  _to_find(to_find),
							  _to_replace(to_replace) {}

void StringReplacer::set_if_filename(std::string filename) { this->_if_filename = filename; }
void StringReplacer::set_to_find(std::string haystack) { this->_to_find = haystack; }
void StringReplacer::set_to_replace(std::string needle) { this->_to_replace = needle; }
void StringReplacer::set_result(std::string result) { this->_result = result; }

std::string StringReplacer::get_if_filename(void) { return this->_if_filename; }
std::string StringReplacer::get_to_find(void) { return this->_to_find; }
std::string StringReplacer::get_to_replace(void) { return this->_to_replace; }
std::string StringReplacer::get_result(void) { return this->_result; }

void StringReplacer::add_result(std::string line)
{
	std::string o_result = this->get_result();
	this->set_result(o_result + line);
}
/**
 * TODO:
 * - copy the content to a new file <filename>.replace
 * - replace every occurrence of s1 witth s2
 */
std::string StringReplacer::replace_str(void)
{
	std::string line;
	std::ifstream file;
	std::string replaced_line_name = this->get_if_filename() + ".replace";
	std::ofstream replaced_file(replaced_line_name.c_str());

	file.open(this->_if_filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Unable to read file " << this->_if_filename << std::endl;
		return "";
	}
	this->_result.clear();

	while (std::getline(file, line))
	{
		std::size_t flag = line.find(this->get_to_find());
		while (flag != std::string::npos)
		{
			std::string sbstr1 = line.substr(0, flag);
			std::string sbstr2 = line.substr(flag + this->get_to_find().length(), line.length());
			std::string final = sbstr1 + this->get_to_replace() + sbstr2;
			line = final;
			flag = line.find(this->get_to_find());
		}
		if (flag == std::string::npos)
		{
			this->add_result(line + "\n");
		}
	}
	file.close();
	if (!replaced_file.is_open())
	{
		std::cerr << "Unable to open output file" << std::endl;
		return "";
	}
	replaced_file << this->get_result();
	replaced_file.close();
	return this->_result;
}
