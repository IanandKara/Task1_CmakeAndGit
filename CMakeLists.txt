cmake_minimum_required(VERSION 3.15) 


set(PROJECT_NAME Task1) 		 
project("${PROJECT_NAME}")           


set(CMAKE_CXX_STANDARD 17)			 
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)


include_directories("/")


add_executable("${PROJECT_NAME}" main.cpp func.hpp func.cpp)

file(COPY "data.txt" DESTINATION "/")


