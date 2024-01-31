#include "Phonebook.hpp"

void	check_command(std::string cmd, Phonebook book){
	if (cmd == "ADD")
		book.add_contact();
	else if (cmd == "SEARCH")
		book.search_contact();
	else if (cmd == "EXIT")
		return ;
}

int	main(){
	Phonebook	book;
	std::string	cmd;

	while (cmd != "EXIT")
	{
		cmd = start_prompt();
		if (!(cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT") || cmd.empty())
			cmd = re_start_prompt();
		check_command(cmd, book);
		if (std::cin.eof()){
			std::cout << std::endl;
			break ;
		}
	}
	return 0;
}
