#include <iostream>

#ifndef GENERAL_H
#define GENERAL_H

namespace General
{
    // Clear the console
    void Clear()
    {
        std::cout << "\x1B[2J\x1B[H";
    }

} // General

#endif // !/GENERAL_H