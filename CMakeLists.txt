cmake_minimum_required(VERSION 4.4)

##uiu
project(Foton-editor)


set(CMAKE_EXPORT_COMPILE_COMMANDS 1)


add_executable(foton main.cpp)


add_library(consolOutput STATIC ${CMAKE_CURRENT_SOURCE_DIR}/adapters/source/consolOutput.cpp)

add_library(stringToCommand STATIC ${CMAKE_CURRENT_SOURCE_DIR}/utilities/source/stringToCommand.cpp)


target_include_directories(consolOutput PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/adapters/include)

target_include_directories(stringToCommand PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/utilities/include)

target_include_directories(stringToCommand PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/domain)


target_link_libraries(foton PRIVATE consolOutput)

target_link_libraries(foton PRIVATE stringToCommand)

target_include_directories(foton PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/core)