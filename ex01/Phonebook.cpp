#include "Phonebook.hpp"

Phonebook::Phonebook(){
	this->index = 0;
	std::cout << "\nWelcome to the Phonebook!\n" << std::endl;
}

void	Phonebook::search_contact(){
	std::cout << "SEARCH" << std::endl;
}


void	Phonebook::add_contact(){
	std::string	cmd;

	this->index = 0;
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

	while (!std::cin.eof())
	{
		cmd = add_prompt("nick name");
		if (!cmd.empty())
			break ;
	}
	this->contacts[this->index].set_nick_name(cmd);

	while (!std::cin.eof())
	{
		cmd = add_prompt("phone number");
		if (!cmd.empty())
			break ;
	}
	this->contacts[this->index].set_phone_number(cmd);

	while (!std::cin.eof())
	{
		cmd = add_prompt("darkest secret");
		if (!cmd.empty())
			break ;
	}
	this->contacts[this->index].set_darkest_secret(cmd);
	this->index++;
}
