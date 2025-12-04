#include <iostream>
#include "termicolor.h"

int main () {
    std::cout << termicolor::red << "Hello World!!!" << termicolor::reset << std::endl;
    std::cout << termicolor::bBlack << termicolor::blue << "Goodbye!" << termicolor::reset << std::endl;
return 0;
}