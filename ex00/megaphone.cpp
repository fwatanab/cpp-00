#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (size_t j = 1; argv[j]; j++) {
		std::string	str = argv[j];
		for (size_t i = 0; i < str.size(); i++)
			str[i] = std::toupper(str[i]);
		std::cout << str;
	}
	std::cout << std::endl;
	return 0;
}
