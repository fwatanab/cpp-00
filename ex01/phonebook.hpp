#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook{
	private:
		class Contact	contacts[8];
	public:
		void	add_contact();
		void	search_contact();
};

std::string	prompt();
std::string	re_prompt();

#endif
