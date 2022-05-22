#include "../include/globals.hpp"
#include "../include/logic.hpp"
#include <vector>

void dfs(std::vector<std::vector<int>>& graph, std::vector<int>& color, int v, int c) 
{
    color[v] = c;
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