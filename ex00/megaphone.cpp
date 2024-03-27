#include <iostream>

int	ft_isupper(int c){
	if ('a' <= c && c <= 'z')
		return 1;
	return 0;
}

void	print_upper(char *str) {
	for(int i = 0; str[i]; i++){
		if (std::islower(str[i]))
			str[i] = std::toupper(str[i]);
	}
	std::cout << str;
}

int	main(int argc, char **argv) {
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int i = 1;
	while (argv[i])
		print_upper(argv[i++]);
	std::cout << std::endl;
	return 0;
}
