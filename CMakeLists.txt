cmake_minimum_required(VERSION 3.16.3)
project(Game)

set(CMAKE_CXX_STANDARD 14)

add_link_options(-lsfml-graphics -lsfml-window -lsfml-system)

include_directories("include/")
set(SOURCE src/Hero.cpp src/Camera.cpp src/Platform.cpp src/Finish.cpp src/Element.cpp)

add_executable(main ${SOURCE} ${HEADERS})
target_link_libraries(main sfml-graphics sfml-window sfml-system)


enable_testing()
find_package(GTest REQUIRED)
find_package(Threads)

include_directories(${GTEST_INCLUDE_DIRS})
add_executable(test_elem test/test.cpp ${SOURCE} ${HEADERS})
target_link_libraries(test_elem ${GTEST_LIBRARIES} pthread)
target_link_libraries(test_elem sfml-graphics sfml-window sfml-system)
