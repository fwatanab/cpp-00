#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class phonebook{
	public:
		void	add_contact();
		void	search_contact();
};

std::string	prompt();
std::string	re_prompt();

#endif
