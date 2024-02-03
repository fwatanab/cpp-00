#include "Phonebook.hpp"

void	search_start_prompt(){
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name| nick name| phone nbr|" << std::endl;
}

std::string	trim_and_dot(std::string str){
	size_t		max_len = 10;

	if (str.length() > max_len)
		return str.substr(0, max_len - 1) + ".";
	return str;
}

void	prompt_name(int index, std::string f_name, std::string l_name, std::string n_name, std::string nbr){
	if (f_name.empty() && l_name.empty() && n_name.empty() && nbr.empty())
		return ;
	std::cout << "|----------|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << index;
	std::cout << "|" << std::right << std::setw(10) << trim_and_dot(f_name);
	std::cout << "|" << std::right << std::setw(10) << trim_and_dot(l_name);
	std::cout << "|" << std::right << std::setw(10) << trim_and_dot(n_name);
	std::cout << "|" << std::right << std::setw(10) << trim_and_dot(nbr) << "|" << std::endl;
}

std::string	search_request_message(){
	std::string	cmd;

	std::cout << "\n0:\treturn to the main menu" << std::endl;
	std::cout << "1~N:\tDisplays contacts at the specified index" << std::endl;
	std::cout << "\nPlease enter index or 0: ";
	std::getline(std::cin, cmd);
	return cmd;
}

void	prompt_index(std::string f_name, std::string l_name, std::string n_name, std::string nbr, std::string dark){
	std::cout << "\n>>>\t" << "First name:\t" << f_name << std::endl;
	std::cout << ">>>\t" << "Last name:\t" << l_name << std::endl;
	std::cout << ">>>\t" << "Nick name:\t" << n_name << std::endl;
	std::cout << ">>>\t" << "Phone number:\t" << nbr << std::endl;
	std::cout << ">>>\t" << "Darkest secret:\t" << dark << std::endl << std::endl;
}
