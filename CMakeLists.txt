
cmake_minimum_required (VERSION 3.20)

project ("CMakeFigures")

set (SOURCES
main.cpp
Equilateral_triangle.cpp
Figure.cpp
Isosceles_triangle.cpp
Parallelogram.cpp
Quadrilateral.cpp
Rectangl.cpp
Rhombus.cpp
Right_triangle.cpp
Square.cpp
Triangle.cpp)

add_executable (CMakeFigures ${SOURCES})
