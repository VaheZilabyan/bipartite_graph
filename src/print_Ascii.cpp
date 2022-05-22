#include "../include/print_Ascii.hpp"
#include <iostream>

void print_Graph()
{
	
	
	std::cout << "\033[1;32m" << "  ██████  ██████   █████  ██████  ██   ██ " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " ██       ██   ██ ██   ██ ██   ██ ██   ██ " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " ██   ███ ██████  ███████ ██████  ███████ " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " ██    ██ ██   ██ ██   ██ ██      ██   ██ " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << "  ██████  ██   ██ ██   ██ ██      ██   ██ " << "\033[0m" << std::endl;
}

void print_no_bipartite()
{

	std::cout << "\033[1;32m" << "  .d8b.                 8        0                     8       8    0                  8    0 8              " << "\033[0m" << std::endl; 
	std::cout << "\033[1;32m" << " dP  Yb                 8                              8       8                       8      8              " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " 8    8                 8                              8       8                       8      8              " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " 8      8d88  88b. 88b. 888b.    8 .d88b    888b. .db. 8888    88b. 8 88b.   88b. 8d88 8888 8 8888  .d8b.    " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " 8  888 8P       b 8  b 8   8    8 8        8  b d   b 8       8  b 8 8  b      b 8    8    8 8    dP  Y8b   " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " 8    8 8   .d8888 8  8 8   8    8  Y88b.   8  8 8   8 8       8  8 8 8  8 .d8888 8    8    8 8    888888    " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " b   dP 8   88   8 8 dP 8   8    8     8    8  8 Y.  P Yb      8 dP 8 8 dP 88   8 8    Yb.  8 8b.  Yb.       " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << "  88P8  8    Y8888 88P  8   8    8 888P     8  8  .bd   Y8     88P  8 88P   Y8888 8     Y8  8  Y8   Y8888    " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << "                   8                                                  8                                      " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << "                   8                                                  8                                      " << "\033[0m" << std::endl;
}

void print_is_bipartite()
{
	std::cout << "\033[1;32m" << "  .d8b.                 8        0          8    0                  8    0 8              " << "\033[0m" << std::endl; 
	std::cout << "\033[1;32m" << " dP  Yb                 8                   8                       8      8              " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " 8    8                 8                   8                       8      8              " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " 8      8d88  88b. 88b. 888b.    8 .d88b    88b. 8 88b.   88b. 8d88 8888 8 8888  .d8b.    " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " 8  888 8P       b 8  b 8   8    8 8        8  b 8 8  b      b 8    8    8 8    dP  Y8b   " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " 8    8 8   .d8888 8  8 8   8    8  Y88b.   8  8 8 8  8 .d8888 8    8    8 8    888888    " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << " b   dP 8   88   8 8 dP 8   8    8     8    8 dP 8 8 dP 88   8 8    Yb.  8 8b.  Yb.       " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << "  88P8  8    Y8888 88P  8   8    8 888P     88P  8 88P   Y8888 8     Y8  8  Y8   Y8888    " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << "                   8                               8                                      " << "\033[0m" << std::endl;
	std::cout << "\033[1;32m" << "                   8                               8                                      " << "\033[0m" << std::endl;
}