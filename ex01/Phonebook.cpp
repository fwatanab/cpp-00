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
	this->contacts[this->index].set_first_name(cmd);

	while (!std::cin.eof())
	{
		cmd = add_prompt("last name");
		if (!cmd.empty())
			break ;
	}
	this->contacts[this->index].set_last_name(cmd);
}
