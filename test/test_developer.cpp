#include "gtest/gtest.h" 
#include "developer.hpp"


class DeveloperTestSuite : public ::testing::Test 
{
protected:
    void SetUp() override 
    {
        junior_developer = std::make_shared<JuniorDeveloper>("Test Junior", "Junior");
        senior_developer = std::make_shared<SeniorDeveloper>("Test Senior", "Senior");
    }

    std::shared_ptr<JuniorDeveloper> junior_developer;
    std::shared_ptr<SeniorDeveloper> senior_developer;
};


TEST_F(DeveloperTestSuite, SeniorDeveloperConstructor) 
{
    EXPECT_EQ(senior_developer->get_name(), "Test Senior");
    EXPECT_EQ(senior_developer->get_alias(), "Senior");
}

TEST_F(DeveloperTestSuite, JuniorDeveloperConstructor) 
{
    EXPECT_EQ(junior_developer->get_name(), "Test Junior");
    EXPECT_EQ(junior_developer->get_alias(), "Junior");
}

