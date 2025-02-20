#include "universe.h"
#include <iostream>
#include <memory>

// Constructs Universe and returns a unique_ptr to it
std::unique_ptr<Universe> pUniverse_create(int rows, int cols, bool toroidal) {
    return std::make_unique<Universe>(rows, cols, toroidal);
}

// Prints members of universe
// TO BE DELETED
void u_printMembers(std::unique_ptr<Universe>& pUniverse) {
    std::cout << "Rows: " << pUniverse->rows() << std::endl;
    std::cout << "Columns: " << pUniverse->cols() << std::endl;
    std::cout << "Toroidal: " << pUniverse->tor() << std::endl;
    return;
}
