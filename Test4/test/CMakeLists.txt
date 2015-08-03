include_directories(${PROJECT_SOURCE_DIR}/hello)
set(SRC_LIST main.cpp)
add_executable(test ${SRC_LIST})
target_link_libraries(test libhello)
