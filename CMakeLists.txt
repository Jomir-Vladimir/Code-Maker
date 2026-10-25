cmake_minimum_required(VERSION 4.4)

project(Code-Maker)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_executable(cmaker main.cpp)

add_library(consolOutput STATIC ${CMAKE_CURRENT_SOURCE_DIR}/adapters/source/consolOutput.cpp)

target_include_directories(consolOutput PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/adapters/include)

target_link_libraries(cmaker PRIVATE consolOutput)

target_include_directories(cmaker PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/core)
