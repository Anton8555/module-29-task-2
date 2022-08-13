cmake_minimum_required(VERSION 3.21)

add_executable("module_29_task_2"
        main.cpp
        circle.cpp
        rectangle.cpp
        triangle.cpp
        )

target_include_directories("module_29_task_2" PUBLIC ${MY_INCLUDE_DIR})