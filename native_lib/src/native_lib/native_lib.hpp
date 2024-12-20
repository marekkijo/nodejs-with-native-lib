#pragma once

#define NATIVE_LIB_API __declspec(dllexport)

extern "C" {
NATIVE_LIB_API void set_message(const char *message);
NATIVE_LIB_API const char *get_message();
NATIVE_LIB_API void print_message();
NATIVE_LIB_API void print_int(const int value);

NATIVE_LIB_API void register_callback(int (*cb)(int));
NATIVE_LIB_API void call_callback(int value);
} // extern "C"
