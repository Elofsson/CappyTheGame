# CMakeList.txt : CMake project for SDLGameCmake, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (CappyTheGame "main.cpp"  "Application.h" "Application.cpp" "Scene.h" "Scene.cpp" "Object2D.h" "Rectangle2D.h" "Rectangle2D.cpp" "Object2D.cpp")

# Include stb_image.
include_directories("../dependencies/stbi")

# Find the SDL2 library.
find_package(SDL2 CONFIG REQUIRED)

# Link? Check exactly what this target_link_libraries actually does.
target_link_libraries(CappyTheGame PRIVATE SDL2::SDL2 SDL2::SDL2)

# TODO: Add tests and install targets if needed.
