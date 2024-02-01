/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwatanab <fwatanab@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:16:54 by fwatanab          #+#    #+#             */
/*   Updated: 2024/02/01 18:34:32 by fwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Contact::set_first_name(const std::string name){
	this->f_name = name;
}

void	Contact::set_last_name(const std::string name){
	this->l_name = name;
}

void	Contact::set_nick_name(const std::string name){
	this->nick_name = name;
}

void	Contact::set_phone_number(const std::string name){
	this->phone_nbr = name;
}

void	Contact::set_darkest_secret(const std::string name){
	this->darkest_secret = name;
}

std::string	Contact::get_name(std::string str){
	if (str == "f_name")
		return this->f_name;
	else if (str == "l_name")
		return this->l_name;
	else if (str == "nick_name")
		return this->nick_name;
	else if (str == "phone_nbr")
		return this->phone_nbr;
	else if (str == "darkest_secret")
		return this->darkest_secret;
	return "";
}
