#include "inc/source.hpp"
#include <iostream>


int main(int argc, const char* argv[]) {
    MyClass c{12};
    auto first = c.GetRandVal();
    auto second = c.GetRandVal();

    std::cout << "first: " << first << "   second: " << second << "\n";
    return 0;
}


// Comment added on 2023-03-21 12:16:38
