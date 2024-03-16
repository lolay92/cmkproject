message(STATUS "Project Name: ${PROJECT_NAME}")
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE utils cxx_setup)