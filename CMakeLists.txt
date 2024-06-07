cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 17)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

set(PROJECT_NAME MetalV2)
project(${PROJECT_NAME})

# include(CTest)
# enable_testing()


add_subdirectory(src)
add_subdirectory(metal-cmake)  
# add_subdirectory(test)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "main")
target_link_libraries(${PROJECT_NAME} METAL_CPP)
