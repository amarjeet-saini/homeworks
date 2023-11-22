add_library(string_split string_split.cpp)
target_link_libraries(string_split PUBLIC no_strings_attached)

add_library(string_trim string_trim.cpp)
target_link_libraries(string_trim PUBLIC  no_strings_attached)

if (BUILD_TESTING)
    add_executable(string_split_test string_split_test.cpp)
    target_link_libraries(string_split_test PRIVATE GTest::gtest_main)
    target_link_libraries(string_split_test PRIVATE string_split)
    
    add_executable(string_trim_test string_trim_test.cpp)
    target_link_libraries(string_trim_test PRIVATE GTest::gtest_main)
    target_link_libraries(string_trim_test PRIVATE string_trim)

    include(GoogleTest)
    gtest_discover_tests(string_split_test)
    gtest_discover_tests(string_trim_test)

endif()