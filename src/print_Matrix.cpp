#include "../include/print_Matrix.hpp"
#include "../include/globals.hpp"
#include <iostream>

void matrix(int arr[][SIZE])
{
	std::cout << "\033[1;32m" << "Adjacency matrixc:" << "\033[0m" << std::endl;
	std::cout << "\033[1;33" << "mV\t " << "\033[0m";
	for (int i = 0; i < V; i++)
	{
		std::cout << "\033[1;33m" << i + 1 << "\033[0m" << "  ";
	}
	std::cout << std::endl << "\t ";
	for (int i = 0; i < V; i++)
	{
		if (i >= 10)
		{
			std::cout << " "; 
		}
		std::cout << "_" << "  ";
	}
	std::cout << std::endl;
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if (j == 0)	
				std::cout << "\033[1;33m" << i + 1 << "\033[0m" << "\t|";
			if (j >= 10)
			{
				std::cout << " "; 
			}
			if (arr[i][j] == 0)
			{
				std::cout << "\033[1;31m" << arr[i][j] << "\033[0m" << "  ";
			}
			else
				std::cout << "\033[1;32m" << arr[i][j] << "\033[0m" << "  ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
} 