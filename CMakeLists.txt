cmake_minimum_required(VERSION 3.15)
project(MyGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})
#
#find_package(SDL2 REQUIRED)
#include_directories(${SDL2_INCLUDE_DIRS})
#
#add_executable(MyGame main.cpp Game.cpp Game.h)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED >=2.0.0)

include_directories(${SDL2_INCLUDE_DIR})
include_directories(${SDL2_IMAGE_INCLUDE_DIR})

add_executable(${PROJECT_NAME} Sources/main.cpp Sources/Game.cpp Sources/Game.h Sources/TextureManager.cpp Sources/TextureManager.h)
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARY})
