cmake_minimum_required(VERSION 3.0)

# set the project name
project(MyFirstProg)

# add the lib

# add another
#add_library(mysource_2 SHARED sources_2.cpp)

# add the executable
add_executable(main main.cc)

# do not forget to link
target_link_libraries(main)

#target_link_libraries(main mysource_2)