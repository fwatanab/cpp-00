#include "Phonebook.hpp"

int	main(){
	Phonebook	book;
	std::string	cmd;

	while (cmd != "EXIT")
	{
		cmd = start_prompt();
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		while (!(cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT") || cmd.empty()){
			cmd = re_start_prompt();
			if (std::cin.eof())
				exit(EXIT_FAILURE);
		}
		if (cmd == "ADD")
			book.add_contact();
		else if (cmd == "SEARCH")
			book.search_contact();
	}
	return 0;
}
