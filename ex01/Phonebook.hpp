#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "Contact.hpp"

class Phonebook{
	private:
		class Contact	contacts[8];
	public:
		void	add_contact();
		void	search_contact();
};

std::string	start_prompt();
std::string	re_start_prompt();
std::string	add_prompt(std::string word);

#endif
