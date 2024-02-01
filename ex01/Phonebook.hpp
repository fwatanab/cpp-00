#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "Contact.hpp"

class Phonebook{
	private:
		class Contact	contacts[8];
		int				index;
	public:
		Phonebook();
		void	add_contact();
		void	search_contact();
		void	search_prompt();
};

std::string	start_prompt();
std::string	re_start_prompt();
std::string	add_prompt(std::string name);
void		prompt_name(int index, std::string f_name, std::string l_name, std::string n_name, std::string nbr);

#endif
