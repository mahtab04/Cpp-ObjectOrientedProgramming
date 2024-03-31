
# Add source to this project's executable.
add_executable (OperatorOverloading "OperatorOverloading.cpp" "OperatorOverloading.h" "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET OperatorOverloading PROPERTY CXX_STANDARD 20)
endif()
