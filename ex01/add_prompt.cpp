#include "Phonebook.hpp"

std::string	add_prompt(std::string word){
	std::string	cmd;

	std::cout << "Please enter your " << word << ":";
	std::getline(std::cin, cmd);
	for (std::size_t i = 0; i < cmd.size(); i++){
		if (std::isspace(cmd[i])){
			std::cout << "Please enter a valid input without any spaces or tabs." << std::endl;
			cmd = "";
		}
	}
	return cmd;
}
