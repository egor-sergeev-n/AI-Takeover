cmake_minimum_required(VERSION 3.16.3)
project(Game)

set(CMAKE_CXX_STANDARD 14)

add_link_options(-lsfml-graphics -lsfml-window -lsfml-system)

include_directories("include/")
set(SOURCE src/Hero.cpp src/Camera.cpp src/Platform.cpp src/Finish.cpp src/Element.cpp)

add_executable(main ${SOURCE} ${HEADERS})

target_link_libraries(main sfml-graphics sfml-window sfml-system)
