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
    std::string const query = "what is 1 to the power of 16";

    ASSERT_THAT(testee.handle(query), Eq(""));
}

TEST(A_Handler, should_return_sum_when_asked_for) {
    std::string const query = "what is 13 plus 2 plus 4";

    ASSERT_THAT(testee.handle(query), Eq("19"));
}


}
