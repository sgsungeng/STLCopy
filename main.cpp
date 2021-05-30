#include <iostream>
#include "debug/assertions.h"

int main() {
    _GLIBCXX_DEBUG_ASSERT(1<2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
