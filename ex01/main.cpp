#include "Phonebook.hpp"

int	main(){
	Phonebook	book;
	std::string	cmd;

	while (cmd != "EXIT")
	{
		cmd = start_prompt();
		if (std::cin.eof()){
			std::cout << std::endl;
			break ;
		}
		while (!(cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT") || cmd.empty()){
			cmd = re_start_prompt();
			if (std::cin.eof()){
				std::cout << std::endl;
				break ;
			}
		}
		if (cmd == "ADD"){
			if (book.add_contact() == 1)
				break ;
		}
		else if (cmd == "SEARCH")
			book.search_contact();
	}
	return 0;
}
