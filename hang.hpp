#include <stdio.h>

#ifndef HANG_H
#define HANG_H

namespace Hang
{

    typedef enum 
    {
        NOTHING,
        HEAD,
        BODY,
        LEG,
        FOOT,
        DEAD
    }State;

    void printHead()
    {
        std::cout << "   ____   " << std::endl;
        std::cout << "  |    |   " << std::endl;
        std::cout << "  |____|   " << std::endl;
    }

    void printBody()
    {
        std::cout << "   ____    " << std::endl;
        std::cout << "  |    |   " << std::endl;
        std::cout << "  |____|   " << std::endl;
        std::cout << "     |     " << std::endl;
        std::cout << "     |     " << std::endl;
    }

    void printLeg()
    {
        std::cout << "   ____    " << std::endl;
        std::cout << "  |    |   " << std::endl;
        std::cout << "  |____|   " << std::endl;
        std::cout << "     |     " << std::endl;
        std::cout << "     |     " << std::endl;
        std::cout << "    /\\    " << std::endl;
        std::cout << "   /  \\   " << std::endl;
    }

    void printFoot()
    {
        std::cout << "   ____    " << std::endl;
        std::cout << "  |    |   " << std::endl;
        std::cout << "  |____|   " << std::endl;
        std::cout << "     |     " << std::endl;
        std::cout << "     |     " << std::endl;
        std::cout << "    /\\    " << std::endl;
        std::cout << " __/  \\__ " << std::endl;
    }

} // Hang

#endif // !/HANG_H