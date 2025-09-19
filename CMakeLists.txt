 cmake_minimum_required(VERSION 3.31)
 set(CMAKE_CXX_STANDARD 20)

 project(Programming-PrinciplesAndPracticeUsingCpp LANGUAGES CXX)

 find_package(FLTK REQUIRED)

 add_library(Graph_lib
         Headers/Graph.cpp
         Headers/GUI.cpp
         Headers/Window.cpp
         Headers/Simple_window.cpp
 )
 target_include_directories(Graph_lib PUBLIC Headers ${FLTK_INCLUDE_DIR})
 target_link_libraries(Graph_lib PUBLIC ${FLTK_LIBRARIES})

 add_subdirectory(Chapter_02/Drill)
 add_subdirectory(Chapter_02/Exercise_02)
 add_subdirectory(Chapter_03/Drill)
 add_subdirectory(Chapter_03/Exercise_02)
 add_subdirectory(Chapter_03/Exercise_04)
 add_subdirectory(Chapter_03/Exercise_06)
 add_subdirectory(Chapter_03/Exercise_07)
 add_subdirectory(Chapter_03/Exercise_08)
 add_subdirectory(Chapter_03/Exercise_10)
 add_subdirectory(Chapter_03/Try_This/Try_This_01)
 add_subdirectory(Chapter_03/Try_This/Try_This_02)
 add_subdirectory(Chapter_03/Try_This/Try_This_03)
 add_subdirectory(Chapter_04/Drill)
 add_subdirectory(Chapter_04/Exercise_02)
 add_subdirectory(Chapter_04/Exercise_03)
 add_subdirectory(Chapter_04/Exercise_04)
 add_subdirectory(Chapter_04/Exercise_05)
 add_subdirectory(Chapter_04/Exercise_06)
 add_subdirectory(Chapter_05/Drill)
 add_subdirectory(Chapter_05/Exercise_02)
 add_subdirectory(Chapter_05/Exercise_07)
 add_subdirectory(Chapter_06/Drill)
 add_subdirectory(Chapter_07/Drill)
 add_subdirectory(Chapter_08/Drill)
 add_subdirectory(Chapter_08/Exercise_02)
 add_subdirectory(Chapter_09/Drill)
 add_subdirectory(Chapter_10/Drill)
 add_subdirectory(Chapter_11/Drill)
 add_subdirectory(Chapter_12/Drill)
 add_subdirectory(Chapter_13/Drill)