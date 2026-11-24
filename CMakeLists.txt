cmake_minimum_required(VERSION 3.16)
project(ai-girlfriend-local CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aigirlfriendlocal
    src/main.cpp
    src/persona.cpp
    src/memory.cpp
    src/voice.cpp
)

target_include_directories(aigirlfriendlocal PRIVATE include)

if(WIN32)
    target_link_libraries(aigirlfriendlocal PRIVATE userenv)
endif()
