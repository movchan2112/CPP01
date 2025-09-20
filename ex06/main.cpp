#include "Harl.hpp"

int main()
{
	Harl	harl;

	std::cout << "Printing all harl could say." << std::endl << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Now you have chance to make harl say something or ctrl-D to stop." << std::endl;
	while(1)
	{
		std::cout << "input: ";
		std::string input;
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cerr << "^D" << std::endl;
			return 1;
		}
		harl.complain(input);
		std::cout << std::endl;
	}
	return (0);
}
