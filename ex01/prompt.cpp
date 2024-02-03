#include "Phonebook.hpp"

std::string	start_prompt(){
	std::string	cmd;

	std::cout << "Please enter one of the following commands:\n" << std::endl;
	std::cout << "ADD:\tAdd a new contact.\n";
	std::cout << "SEARCH:\tSearch for an existing contact.\n";
	std::cout << "EXIT:\tExit the program.\n" << std::endl;
	std::cout << "Enter your command: ";
	std::getline(std::cin, cmd);
	if (cmd != "EXIT")
		std::cout << std::endl;
	return cmd;
}

std::string	re_start_prompt(){
	std::string	cmd;

	std::cout << "Invalid command. Please choose one of the following options:" << std::endl;
	std::cout << "ADD:\tAdd a new contact.\n";
	std::cout << "SEARCH:\tSearch for an existing contact.\n";
	std::cout << "EXIT:\tExit the program.\n" << std::endl;
	std::cout << "Please enter a valid command: ";
	std::getline(std::cin, cmd);
	if (cmd != "EXIT")
		std::cout << std::endl;
	return cmd;
}
