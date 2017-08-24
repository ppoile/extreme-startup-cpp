#include <gmock/gmock.h>

#include <handler.h>

using namespace testing;

namespace {

TEST(A_Handler, should_return_its_name_when_asked_for) {
  Handler testee;
  std::string const query = "what is your name";

  ASSERT_THAT(testee.handle(query), Eq("skm_team"));
}

TEST(A_Handler, should_return_power_calculations_when_asked_for) {
	Handler testee;
    std::string const query = "what is 1 to the power of 16";

    ASSERT_THAT(testee.handle(query), Eq(""));
}

TEST(A_Handler, should_return_sum_when_asked_for) {
    Handler testee;
    std::string const query = "what is 13 plus 2 plus 4";

    ASSERT_THAT(testee.handle(query), Eq("19"));
}

//which of the following numbers are primes: 373, 775

//what is 0 plus 13 multiplied by 19

//what is the 15th number in the Fibonacci sequence

//what is 2 multiplied by 12 plus 8

//what is 8 plus 17 multiplied by 7

}
