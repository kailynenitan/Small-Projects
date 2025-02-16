#ifndef UNIVERSE_H
#define UNIVERSE_H

#include <iostream>
#include <vector>

class Universe {
private:
    int u_rows {};
    int u_cols {};
    bool u_toroidal {};
    std::vector<bool> u_grid;

public:
    Universe(int rows, int cols, bool toroidal);

    void print();
};

#endif
