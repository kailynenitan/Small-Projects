#ifndef UNIVERSE_H
#define UNIVERSE_H

#include <iostream>
#include <memory>
#include <vector>

class Universe {
private:
    int m_rows {};
    int m_cols {};
    bool m_toroidal {};
    // std::vector<bool> m_grid;

public:
    // Constructor function
    Universe(int rows, int cols, bool toroidal)
        : m_rows { rows }
        , m_cols { cols }
        , m_toroidal { toroidal } { }

    // Destructor function
    ~Universe() {
        std::cout << "Universe destroyed. >:]" << std::endl;
    }

    // Accesses rows in Universe
    int rows() {
        return m_rows;
    }

    // Accesses cols in Universe
    int cols() {
        return m_cols;
    }

    bool tor() {
        return m_toroidal;
    }
};

// Constructor function returns pointer to created Universe
std::unique_ptr<Universe> pUniverse_create(int rows, int cols, bool toroidal);

// Prints members of Universe u
void u_printMembers(std::unique_ptr<Universe>& pUniverse);

#endif
