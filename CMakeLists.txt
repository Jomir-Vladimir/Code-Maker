cmake_minimum_required(VERSION 4.4)

##uiu
project(Foton-editor)


set(CMAKE_EXPORT_COMPILE_COMMANDS 1)


add_executable(foton main.cpp)


add_library(consolOutput STATIC ${CMAKE_CURRENT_SOURCE_DIR}/adapters/source/consolOutput.cpp)

add_library(stringToCommand STATIC ${CMAKE_CURRENT_SOURCE_DIR}/utilities/source/stringToCommand.cpp)

add_library(project_generator STATIC ${CMAKE_CURRENT_SOURCE_DIR}/adapters/source/project_generator.cpp)


target_include_directories(consolOutput PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/adapters/include)

target_include_directories(stringToCommand PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/utilities/include)

target_include_directories(stringToCommand PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/domain)

target_include_directories(project_generator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/adapters/include)

target_include_directories(project_generator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/domain)


target_link_libraries(foton PRIVATE consolOutput)

target_link_libraries(foton PRIVATE stringToCommand)

target_link_libraries(foton PRIVATE project_generator)

target_include_directories(foton PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/core)