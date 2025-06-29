#include <iostream>

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"		/* Yellow */
#define BLUE    "\033[34m"		/* Blue */

int main( void ) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << YELLOW << "The memory address of the string variable:  " << RESET << &str << std::endl;
	std::cout << YELLOW << "The memory address held by stringPTR:       " << RESET << stringPTR << std::endl;
	std::cout << YELLOW << "The memory address held by stringREF:       " << RESET << &stringREF << std::endl;

	std::cout << BLUE <<   "The value of the string variable:           " << RESET << str << std::endl;
	std::cout << BLUE <<   "The value pointed to by stringPTR:          " << RESET << *stringPTR << std::endl;
	std::cout << BLUE <<   "The value pointed to by stringREF:          " << RESET << stringREF << std::endl;

	return 0;
}
