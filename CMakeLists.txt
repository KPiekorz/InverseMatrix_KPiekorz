cmake_minimum_required(VERSION 3.16)
project(InverseMatrix_KPiekorz)

set(CMAKE_CXX_STANDARD 14)

add_executable(InverseMatrix_KPiekorz src/main.cpp src/matrixlib.tpp inc/matrixlib.h src/pseudoinvmatrix.cpp inc/pseudoinvmatrix.h)