#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class Phonebook{
	private:
		class Contact	contacts[8];
		int				index;
	public:
		Phonebook();
		void	add_contact();
		void	search_contact();
};

std::string	start_prompt();
std::string	re_start_prompt();
std::string	add_prompt(std::string name);
void		search_start_prompt();
void		prompt_name(int index, std::string f_name, std::string l_name, std::string n_name, std::string nbr);
std::string	prompt_request_index();

#endif
