#include <gtest/gtest.h>

#include <developer.hpp>

class DeveloperTestSuite : public ::testing::Test
{
   protected:
        JuniorDeveloper junior_developer_ = JuniorDeveloper("Test Junior", "Junior");
        SeniorDeveloper senior_developer_ = SeniorDeveloper("Test Senior", "Senior");

};

TEST_F(DeveloperTestSuite, SeniorDeveloperConstructor)
{
    EXPECT_EQ("Test Senior", senior_developer_.get_name());
    EXPECT_EQ("Senior",senior_developer_.get_alias());
}

TEST_F(DeveloperTestSuite, JuniorDeveloperConstructor)
{
    EXPECT_EQ("Test Junior", junior_developer_.get_name());
    EXPECT_EQ("Junior", junior_developer_.get_alias());
}
