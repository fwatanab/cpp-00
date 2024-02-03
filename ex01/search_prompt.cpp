/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_prompt.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwatanab <fwatanab@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:27:43 by fwatanab          #+#    #+#             */
/*   Updated: 2024/02/03 15:44:53 by fwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	search_start_prompt(){
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name| nick name| phone nbr|" << std::endl;
}

std::string	trim_and_dot(std::string str){
	size_t		max_len = 10;

	if (str.length() > max_len)
		return str.substr(0, max_len - 1) + ".";
	return str;
}

void	prompt_name(int index, std::string f_name, std::string l_name, std::string n_name, std::string nbr){
	if (f_name.empty() && l_name.empty() && n_name.empty() && nbr.empty())
		return ;
	std::cout << "|----------|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << index;
	std::cout << "|" << std::right << std::setw(10) << trim_and_dot(f_name);
	std::cout << "|" << std::right << std::setw(10) << trim_and_dot(l_name);
	std::cout << "|" << std::right << std::setw(10) << trim_and_dot(n_name);
	std::cout << "|" << std::right << std::setw(10) << trim_and_dot(nbr) << "|" << std::endl;
}
