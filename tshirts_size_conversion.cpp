#include "./tshirts_size_conversion.h"
#include <assert.h>
#include <iostream>

namespace tshirts {
    char convertCmToSizeName(int tshirts_size_in_cms) {
        char tshirts_sizeName = '\0';
        if (tshirts_size_in_cms < 38 || tshirts_size_in_cms == 38) {
            tshirts_sizeName = 'S';
        } else if (tshirts_size_in_cms > 38 && tshirts_size_in_cms <= 42) {
            tshirts_sizeName = 'M';
        } else if (tshirts_size_in_cms > 42) {
            tshirts_sizeName = 'L';
        }
        return tshirts_sizeName;
    }
}  //  namespace tshirts
