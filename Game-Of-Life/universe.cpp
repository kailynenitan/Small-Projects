#include "universe.h"
#include <iostream>

Universe::Universe(int rows, int cols, bool toroidal)
    : u_rows { rows }
    , u_cols { cols }
    , u_toroidal { toroidal } { }

void Universe::print() {
    std::cout << "rows: " << u_rows << std::endl;
    std::cout << "cols: " << u_cols << std::endl;
    std::cout << "toroidal: " << u_toroidal << std::endl;
    return;
}
