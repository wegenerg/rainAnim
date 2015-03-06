cmake_minimum_required (VERSION 2.6)
project (Animation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_MODULE_PATH /usr/local/lib/cmake /usr/local/lib/x86_64-linux-gnu/cmake)
set(CMAKE_PREFIX_PATH /usr/local/lib/cmake/glfw)
include_directories (../Shapes)
find_package (OpenGL)
find_package (GLM REQUIRED)
find_package (GLEW REQUIRED)
find_package (glfw3 REQUIRED)
find_library(COCOA_LIBRARY Cocoa REQUIRED)
find_library (IOKIT_LIBRARY IOKit REQUIRED)
find_library (COREVID_LIBRARY CoreVideo REQUIRED)


add_executable (anim animation.cc Ball.cpp  Wheel.cc Wheel.h Arm.h Arm.cpp
SwingFrame.cpp ../SimpleObjects/TCone.cpp ../ComplexObjects/Raindrop.cpp
        ../Shapes/Sphere.cpp ../Shapes/Cylinder.cpp ../Shapes/Torus.cpp)
target_link_libraries (anim ${OPENGL_LIBRARIES} ${COCOA_LIBRARY}
${IOKIT_LIBRARY} ${COREVID_LIBRARY} ${GLFW3_LIBRARY} ${GLEW_LIBRARY})
