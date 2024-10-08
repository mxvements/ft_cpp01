/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringReplacer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:26:36 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/09 19:32:17 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGREPLACER_HPP
#define STRINGREPLACER_HPP

# include <iostream>
# include <string>
# include <fstream>

class StringReplacer
{
	private:
		std::string _filename;
		std::string _to_find;
		std::string _to_replace; //string to replace in haystack
		std::string _result; //replaced haystack

	public:
		StringReplacer(void);
		~StringReplacer(void);
		StringReplacer(std::string filename, std::string to_find, std::string to_replace);
		void set_filename(std::string filename);
		void set_to_find(std::string haystack);
		void set_to_replace(std::string needle);
		void set_result(std::string result);
		std::string get_filename(void);
		std::string get_to_find(void);
		std::string get_to_replace(void);
		std::string get_result(void);
		
		std::string replace_str(void);
		
} ;

#endif