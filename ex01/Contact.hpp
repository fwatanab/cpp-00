#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	nick_name;
		std::string	phone_nbr;
		std::string	darkest_secret;
	public:
		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nick_name(std::string name);
		void	set_phone_number(std::string name);
		void	set_darkest_secret(std::string name);
};

#endif
