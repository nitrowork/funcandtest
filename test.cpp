#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "increase_vector.hpp"

TEST_CASE("Increase vector elements", "[increaseVector]") {
    SECTION("Increasing vector elements by positive number") {
        std::vector<int> input = {1, 2, 3, 4, 5};
        std::vector<int> expected = {6, 7, 8, 9, 10};
        REQUIRE(increaseVector(input, 5) == expected);
    }

    SECTION("Increasing vector elements by negative number") {
        std::vector<int> input = {1, 2, 3, 4, 5};
        std::vector<int> expected = {-4, -3, -2, -1, 0};
        REQUIRE(increaseVector(input, -5) == expected);
    }

    SECTION("Increasing vector elements by zero") {
        std::vector<int> input = {1, 2, 3, 4, 5};
        std::vector<int> expected = {1, 2, 3, 4, 5};
        REQUIRE(increaseVector(input, 0) == expected);
    }
}
