#include <gtest/gtest.h>
#include "../utils/utils.h"
#include <iostream>
#include <string>
#include <memory>

class TestFixture: public testing::Test {
    protected:
        void SetUp() override {
            std::cout << "test fixture SetUp!\n"; 
            str_arg = std::make_unique<std::string>("Trying gtest!");
        }

        void TearDown() override {
            std::cout << "test fixture teardown!\n"; 
        }

        std::unique_ptr<std::string> str_arg; 
}; 

TEST_F(TestFixture, test1) {
    ASSERT_STRNE("gtest configured!", str_arg->c_str());
}

TEST_F(TestFixture, test2) {
    // here Print function takes c++ string object and returns c++ string objects.  
    // but since ASSERT_EQ only compares C_style strings, c_str() is used to convert
    // c++ string object into c_style string (null terminated character arrays)
    ASSERT_STREQ("Trying gtest!", cmkproject::utils::Print(*str_arg).c_str()); 
}

