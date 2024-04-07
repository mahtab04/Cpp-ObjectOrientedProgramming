# Add source to this project's executable.
add_executable (AbstractClass "main.cpp" "Shape.h" "Triangle.h" "Triangle.cpp" "Rectangle.h" "Rectangle.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AbstractClass PROPERTY CXX_STANDARD 20)
endif()


