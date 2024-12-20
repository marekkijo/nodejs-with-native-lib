#include "native_lib/native_lib.hpp"

#include <iostream>
#include <string>

namespace {
std::string message = "Hello from native_lib!";
} // namespace

void set_message(const char *new_message) { message = new_message; }

const char *get_message() { return message.c_str(); }

void print_message() { std::cout << "Message: " << message << std::endl; }

void print_int(const int value) { std::cout << "Value: " << value << std::endl; }
