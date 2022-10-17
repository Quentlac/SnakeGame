cmake_minimum_required(VERSION 3.23)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(SnakeGame main.cpp Snake.cpp Snake.h Case.cpp Case.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(c:/SFML/include)
target_link_libraries(SnakeGame sfml-system sfml-window sfml-graphics sfml-audio)
