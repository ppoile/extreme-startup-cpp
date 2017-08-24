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

    ASSERT_THAT(testee.handle(query), Eq("1"));
}

TEST(A_Handler, should_return_sum_when_asked_for) {
    Handler testee;
    std::string const query = "what is 13 plus 2 plus 4";

    ASSERT_THAT(testee.handle(query), Eq("19"));
}

TEST(A_Handler, should_return_primes_when_asked_for) {
    Handler testee;
    std::string const query = "which of the following numbers are primes: 373, 775";

    ASSERT_THAT(testee.handle(query), Eq(""));
}

TEST(A_Handler, should_return_result_when_asked_for_2) {
    Handler testee;
    std::string const query = "what is 0 plus 13 multiplied by 19";

    ASSERT_THAT(testee.handle(query), Eq("247"));
}

TEST(A_Handler, should_return_fibonacci_sequence_when_asked_for_3) {
    Handler testee;
    std::string const query = "what is the 15th number in the Fibonacci sequence";

    ASSERT_THAT(testee.handle(query), Eq(""));
}

TEST(A_Handler, should_return_result_multiply_and_add_when_asked_for) {
    Handler testee;
    std::string const query = "what is 2 multiplied by 12 plus 8";

    ASSERT_THAT(testee.handle(query), Eq("32"));
}
//

TEST(A_Handler, should_return_result_add_and_multiply_when_asked_for) {
    Handler testee;
    std::string const query = "what is 8 plus 17 multiplied by 7";

    ASSERT_THAT(testee.handle(query), Eq("175"));
}

}
