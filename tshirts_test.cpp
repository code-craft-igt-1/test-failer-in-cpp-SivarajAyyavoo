#include "./tshirts_size_conversion.h"
#include <assert.h>
#include <iostream>

int main() {
    assert(tshirts::convertCmToSizeName(37) == 'S');
    assert(tshirts::convertCmToSizeName(38) == 'S');
    assert(tshirts::convertCmToSizeName(40) == 'M');
    assert(tshirts::convertCmToSizeName(42) == 'M');
    assert(tshirts::convertCmToSizeName(43) == 'L');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
