cmake_minimum_required(VERSION 3.19)
project(mini_shell C)

set(CMAKE_C_STANDARD 99)

include_directories(mini_shell)

add_executable(mini_shell
        mini_shell/strtok.c
        mini_shell/main.c)