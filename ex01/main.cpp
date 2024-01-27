#include "phonebook.hpp"

void	check_command(std::string cmd, phonebook book){
	if (cmd == "ADD")
		book.add_contact();
	else if (cmd == "SEARCH")
		book.search_contact();
	else if (cmd == "EXIT")
		return ;
	else if (!(cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT") || cmd.empty())
		cmd = re_prompt();
}

int	main(){
	phonebook	book;
	std::string	cmd;

	while (cmd != "EXIT")
	{
		cmd = prompt();
		check_command(cmd, book);
		if (std::cin.eof()){
			std::cout << std::endl;
			break ;
		}
	}
	return 0;
}
