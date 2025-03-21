project(global)
add_library(array ../Array/array.cpp)

add_executable(es01 es01.cpp)
add_executable(es03 es03.cpp)
add_executable(es04 es04.cpp)
add_executable(es05 es05.cpp)

target_include_directories(es01 PUBLIC "../Array")
target_link_libraries(es01 array)

target_include_directories(es03 PUBLIC "../Array")
target_link_libraries(es03 array)

target_include_directories(es04 PUBLIC "../Array")
target_link_libraries(es04 array)

target_include_directories(es05 PUBLIC "../Array")
target_link_libraries(es05 array)
