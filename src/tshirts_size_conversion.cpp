#include "inc/tshirts_size_conversion.h"
#include <assert.h>
#include <iostream>

namespace tshirts {
    char size(int cms) {
        char sizeName = '\0';
        if (cms < 38) {
            sizeName = 'S';
        } else if (cms > 38 && cms < 42) {
            sizeName = 'M';
        } else if (cms > 42) {
            sizeName = 'L';
        }
        return sizeName;
    }
} // namespace tshirts
