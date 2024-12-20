add_library(native_lib SHARED src/native_lib/native_lib.cpp)

target_include_directories(native_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
