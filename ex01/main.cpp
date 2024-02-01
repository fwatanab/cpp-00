#include "Phonebook.hpp"

int	main(){
	Phonebook	book;
	std::string	cmd;

	while (cmd != "EXIT")
	{
		cmd = start_prompt();
		while (!(cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT") || cmd.empty())
			cmd = re_start_prompt();
		if (cmd == "ADD")
			book.add_contact();
		else if (cmd == "SEARCH")
			book.search_contact();
		if (std::cin.eof()){
			std::cout << std::endl;
			break ;
		}
	}
	return 0;
}
