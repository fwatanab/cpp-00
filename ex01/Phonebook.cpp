#include "Phonebook.hpp"

Phonebook::Phonebook(){
	this->index = 0;
	std::cout << "\nWelcome to the Phonebook!\n" << std::endl;
}

void	Phonebook::add_contact(){
	std::string	cmd;

	while (1){
		cmd = add_prompt("first name");
		if (std::cin.eof())
			return ;
		if (cmd.empty())
			std::cout << "Empty input is not allowed." << std::endl;
	}
	this->contacts[this->index].set_first_name(cmd);

	while (1){
		cmd = add_prompt("last name");
		if (std::cin.eof())
			return ;
		if (cmd.empty())
			std::cout << "Empty input is not allowed." << std::endl;
	}
	this->contacts[this->index].set_last_name(cmd);

	while (1){
		cmd = add_prompt("nick name");
		if (std::cin.eof())
			return ;
		if (cmd.empty())
			std::cout << "Empty input is not allowed." << std::endl;
	}
	this->contacts[this->index].set_nick_name(cmd);

	while (1){
		cmd = add_prompt("phone number");
		if (std::cin.eof())
			return ;
		if (cmd.empty())
			std::cout << "Empty input is not allowed." << std::endl;
	}
	this->contacts[this->index].set_phone_number(cmd);

	while (1){
		cmd = add_prompt("darkest secret");
		if (std::cin.eof())
			return ;
		if (cmd.empty())
			std::cout << "Empty input is not allowed." << std::endl;
	}
	this->contacts[this->index].set_darkest_secret(cmd);
	if (this->index >= 7)
		this->index = 0;
	else
		this->index++;
}

void	Phonebook::search_contact(){
	search_start_prompt();
	for (int i = 0; i < 8; i++){
		prompt_name(i + 1, this->contacts[i].get_name("f_name"), this->contacts[i].get_name("l_name"), this->contacts[i].get_name("nick_name"), this->contacts[i].get_name("phone_nbr"));
	}
	std::cout << "--------------------------------------------------------" << std::endl;
}
