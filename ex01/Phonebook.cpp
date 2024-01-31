#include "Phonebook.hpp"

void	Phonebook::search_contact(){
	std::cout << "SEARCH" << std::endl;
}


void	Phonebook::add_contact(){
	std::string	cmd;

	while (!std::cin.eof())
	{
		cmd = add_prompt("first name");
		if (!cmd.empty())
			break ;
	}
}
