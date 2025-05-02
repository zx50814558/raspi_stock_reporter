#include "raspi_stock_reporter/raspi_stock_reporter.hpp"
#include "catch2/catch.hpp"

using namespace raspi_stock_reporter;

TEST_CASE( "add_one", "[adder]" ){
  REQUIRE(add_one(0) == 1);
  REQUIRE(add_one(123) == 124);
  REQUIRE(add_one(-1) == 0);
}