project(AI-Takeover)
cmake_minimum_required(VERSION 3.16)

set(CMAKE_C_FLAGS "-Wall -Werror -Wpedantic")
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wpedantic")
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Level)
add_subdirectory(Game)

add_executable(main Main.cpp ${SOURCE} ${HEADERS})

target_link_libraries(main sfml-graphics sfml-window sfml-system Game)
target_include_directories(main PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/Game/include")