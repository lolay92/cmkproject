if(BUILD_TESTING)
    add_executable(test_utils test_utils.cpp)
    target_link_libraries(test_utils PRIVATE utils cxx_setup GTest::gtest_main)

    include(googletest)
    gtest_discover_tests(test_utils)
endif()

