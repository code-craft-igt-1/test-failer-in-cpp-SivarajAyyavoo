#include "../inc/tshirts_size_conversion.h"
#include "gtest/gtest.h"

namespace tshirts {
namespace test {

    TEST(TshirtsSizeConversion, CornerCaseTests) {
        EXPECT_EQ(tshirts::size(38), 'S');
        EXPECT_EQ(tshirts::size(42), 'M');
    }

} // namespace test
} // namespace tshirts
