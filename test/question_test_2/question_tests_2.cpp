#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get cookie ingredients function")
{
	std::vector<double> ing = {1.5, 1, 2.75};
	std::vector<double> nums2 = {3, 2, 5.5};
	std::vector<double> nums3 = {0.75, 0.5, 1.375};

	REQUIRE(get_cookie_ingredients(ing, 48) == ing);
	REQUIRE(get_cookie_ingredients(ing, 96) == nums3);
	REQUIRE(get_cookie_ingredients(ing, 24) == nums3);
	
}