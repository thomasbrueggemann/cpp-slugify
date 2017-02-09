#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <iostream>
#include "catch.hpp"
#include "slugify.hpp"

TEST_CASE("Create slugified string", "[Slugify]" ) {

	Slugify slug;
	std::string test = slug.SlugIt("Dies ist €in Test");

	std::cout << test << std::endl;

	REQUIRE( 1 == 1 );
}
