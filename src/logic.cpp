#include "../include/globals.hpp"
#include "../include/logic.hpp"
#include <vector>
#include <fstream>

extern std::ofstream GraphFile;

void dfs(std::vector<std::vector<int>>& graph, std::vector<int>& color, int v, int c) 
{
    color[v] = c;
	if (c == 1) {
		GraphFile << "\t" << v + 1 << " [ color = green ]\n";
	}/* 
	else {
		GraphFile << "\t" << v + 1 << " [ color = red ]\n";
	}  */ 
    for (int u : graph[v]) {
        if (color[u] == 0) {
			if (c == 1) {
				dfs(graph, color, u, 2);
			}
			else {
				dfs(graph, color, u, 1);
			}
		}
        else if (color[u] == c) {
			isBipartite = false;
		}
    }
}