#include "../include/globals.hpp"
#include <fstream>

int V;
int E;
bool isBipartite = true;
std::ofstream GraphFile("data/g.dot", std::ofstream::out | std::ofstream::trunc);