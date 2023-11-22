cmake_minimum_required(VERSION 3.25.2)
project(no_strings_attached)

# ?????
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "" FORCE)
endif()
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

add_library(no_strings_attached INTERFACE)
target_compile_options(no_strings_attached
  INTERFACE -Wall -Wpedantic -Wextra)
target_compile_features(no_strings_attached INTERFACE cxx_std_17)
target_include_directories(no_strings_attached
  INTERFACE ${PROJECT_SOURCE_DIR})

include(external/UpdateSubmodules.cmake)

include(CTest)

add_subdirectory(${PROJECT_NAME})
add_subdirectory(external)
add_subdirectory(examples)