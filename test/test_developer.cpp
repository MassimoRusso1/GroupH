//include statements for the Google Test framework
#include <gtest/gtest.h>
#include <developer.hpp>

class DeveloperTestSuite : public ::testing::Test
{
   protected:
        JuniorDeveloper junior_developer_ = JuniorDeveloper("Test Junior", "Junior");
        SeniorDeveloper senior_developer_ = SeniorDeveloper("Test Senior", "Senior");

};

//Test case for SeniorDeveloper constructor
TEST_F(DeveloperTestSuite, SeniorDeveloperConstructor)
{
    //Check if the name is correctly set
    EXPECT_EQ("Test Senior", senior_developer_.get_name());
    //Check if the alias is correctly set
    EXPECT_EQ("Senior",senior_developer_.get_alias());
}

//Test case for JuniorDeveloper constructor
TEST_F(DeveloperTestSuite, JuniorDeveloperConstructor)
{
    //Check if the name is correctly set
    EXPECT_EQ("Test Junior", junior_developer_.get_name());
    //Check if the alias is correctly set
    EXPECT_EQ("Junior", junior_developer_.get_alias());
}
