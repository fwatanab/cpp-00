#include "Phonebook.hpp"

void	Contact::set_first_name(const std::string name){
	f_name = name;
	std::cout << f_name << std::endl;
}

void	Contact::set_last_name(const std::string name){
	l_name = name;
}

void	Contact::set_nick_name(const std::string name){
	nick_name = name;
}

void	Contact::set_phone_number(const std::string name){
	phone_nbr = name;
}

void	Contact::set_darkest_secret(const std::string name){
	darkest_secret = name;
}
