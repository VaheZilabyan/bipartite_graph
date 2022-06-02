#include <iostream>
#include <fstream>
#include <vector>
  
#include "../include/print_Ascii.hpp"
#include "../include/print_Matrix.hpp"
#include "../include/globals.hpp"
#include "../include/logic.hpp"

bool file_is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

void input(std::ifstream& fin, std::vector<std::vector<int>>& graph, int arr[][SIZE])
{
	int x, y;
	while (!file_is_empty(fin)) {
		fin >> x >> y;
		if (x == y)
			isBipartite = false;
		if (x > V || y > V || x <= 0 || y <= 0) {
			std::cout << "Wrong input(incorrect input of adjacent vertices)..." << std::endl;
			exit(0);
		}

		arr[x - 1][y - 1] = 1;
		arr[y - 1][x - 1] = 1;

		graph[x - 1].push_back(y - 1);
		graph[y - 1].push_back(x - 1);
		E++;
    }
	std::cout << std::endl;
}

extern std::ofstream GraphFile;

int main()
{
	std::vector<int> color;
	std::vector<std::vector<int>> graph; 
	std::ifstream fin("data/input.txt");
	//GraphFile.open("data/g.dot", std::ofstream::out | std::ofstream::trunc);
    //std::ofstream GraphFile("data/g.dot", std::ofstream::out | std::ofstream::trunc);
	
	if (fin.is_open()) {
		fin >> V;
	}
	else {
		std::cout << "The file could not be opened..." << std::endl;
		return -1;
	}  
	
	int arr[SIZE][SIZE];
    graph.resize(V);
    color.resize(V);
    std::fill(color.begin(), color.end(), 0);
	std::fill(*arr, *arr + SIZE*SIZE, 0);
	
	std::cout << std::endl;
	
	if (V <= 0) {	
		std::cout << "Wrong input(the number of vertices of the graph is less than 0)..." << std::endl;
		return -1;
	}
	
	input(fin, graph, arr);
	print_Graph();
	std::cout << "\n";
	std::cout << "\033[1;31m" << "Edge = " << E << "\033[0m" << "\n\n";
	matrix(arr);
    
	GraphFile << "graph G {\n";
	GraphFile << "\tnode[ style = filled, color = red]\n";
    for (int i = 1; i < V; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i][j] == 1) {
                GraphFile << "\t" << i + 1 << " -- " << j + 1 << "\n";
            }
        }
    }	

	for (int i = 0; i < V; i++) {
		if (graph[i].empty())
			std::cout << i + 1 << " Vertex is isolated";
        else 
			std::cout << i + 1 << " Vertex: The neighbors of this vertex are: ";
        for (int v : graph[i]) {     
            std::cout << "\033[1;32m" << v + 1 << "\033[0m ";                    
        }  
        std::cout << std::endl;
    }
	std::cout << std::endl;
	
    for (int i = 0; i < V; i++) {
        if (color[i] == 0) {
			dfs(graph, color, i, 1);
		}
    }
	
	std::cout << "\n\n";
    if (isBipartite) {
		print_is_bipartite();
	}
	else {
		print_no_bipartite();
	}
    
    std::cout << "\n\n\033[1;32m" << "Github - https://github.com/VaheZilabyan/bipartite_graph.git" << "\033[0m\n\n";
    GraphFile << "}";
	fin.close();
    GraphFile.close();
	
    system("dot -Tpng -O data/g.dot && xdg-open data/g.dot.png");

	return 0;
}
