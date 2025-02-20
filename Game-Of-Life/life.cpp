#include "universe.h"
#include <iostream>

int main() {
    std::unique_ptr<Universe> uv { pUniverse_create(6, 12, false) };
    std::cout << "Printing rows..." << std::endl;
    u_printMembers(uv);

    return 0;
}
