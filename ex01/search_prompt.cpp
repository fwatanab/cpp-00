/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_prompt.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwatanab <fwatanab@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:27:43 by fwatanab          #+#    #+#             */
/*   Updated: 2024/02/01 19:39:12 by fwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	search_start_prompt(){
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name| nick name| phone nbr|" << std::endl;
}

void	prompt_name(int index, std::string f_name, std::string l_name, std::string n_name, std::string nbr){
	if (f_name.empty() && l_name.empty() && n_name.empty() && nbr.empty())
		return ;
	std::cout << "|----------|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << index;
	std::cout << "|" << std::right << std::setw(10) << f_name;
	std::cout << "|" << std::right << std::setw(10) << l_name;
	std::cout << "|" << std::right << std::setw(10) << n_name;
	std::cout << "|" << std::right << std::setw(10) << nbr << "|" << std::endl;
}
