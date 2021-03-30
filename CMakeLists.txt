cmake_minimum_required(VERSION 3.6)

project(linkDll)

file (GLOB_RECURSE SRCS src/*.cpp src/*.cxx src/**/*.cpp src/**/*.cxx)
file (GLOB_RECURSE HEADERS src/*.h src/**/*.h)

message(VERBOSE ${SRCS})

add_executable(${PROJECT_NAME} ${SRCS})

# src/utils/loader/loader.cpp

target_link_libraries(${PROJECT_NAME} PUBLIC opengl32)
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR}/dll/SDL2.dll)