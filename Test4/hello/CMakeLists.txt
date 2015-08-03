set(SRC_LIST hello.cpp hello.h)
add_library(libhello ${SRC_LIST})
set_target_properties(libhello PROPERTIES OUTPUT_NAME hello)