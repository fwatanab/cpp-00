#include "Phonebook.hpp"

std::string	start_prompt(){
	std::string	cmd;

	std::cout << "Welcome to the Phonebook!\n";
	std::cout << "Please enter one of the following commands:\n" << std::endl;
	std::cout << "ADD: Add a new contact.\n";
	std::cout << "SEARCH: Search for an existing contact.\n";
	std::cout << "EXIT: Exit the program.\n" << std::endl;
	std::cout << "Enter your command: ";
	std::getline(std::cin, cmd);
	return cmd;
}

std::string	re_start_prompt(){
	std::string	cmd;

	std::cout << "Invalid command. Please choose one of the following options:" << std::endl;
	std::cout << "ADD: Add a new contact.\n";
	std::cout << "SEARCH: Search for an existing contact.\n";
	std::cout << "EXIT: Exit the program.\n" << std::endl;
	std::cout << "Please enter a valid command: ";
	std::getline(std::cin, cmd);
	return cmd;
}
