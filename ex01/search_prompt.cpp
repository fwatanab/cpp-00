#include "Phonebook.hpp"

void	Phonebook::search_prompt(){
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name| nick name| phone nbr|" << std::endl;
	std::cout << "|----------|----------|----------|----------|----------|" << std::endl;
}

void	prompt_name(int index, std::string f_name, std::string l_name, std::string n_name, std::string nbr){
	if (f_name.empty() && l_name.empty() && n_name.empty() && nbr.empty())
		return ;
	std::cout << "|         " << index << "|" << f_name << l_name << n_name << nbr << std::endl;
	std::cout << "|----------|----------|----------|----------|----------|" << std::endl;
}
