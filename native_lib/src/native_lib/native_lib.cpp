#include "native_lib/native_lib.hpp"

#include <functional>
#include <iostream>
#include <string>

namespace {
std::string message = "Hello from native_lib!";
std::function<int(int)> callback;
} // namespace

void set_message(const char *new_message) { message = new_message; }

const char *get_message() { return message.c_str(); }

void print_message() { std::cout << "print_message: " << message << std::endl; }

void print_int(const int value) { std::cout << "print_int: " << value << std::endl; }

void register_callback(int (*cb)(int)) { callback = cb; }

void call_callback(int value) {
  std::cout << "call_callback: " << value << std::endl;
  if (callback) {
    int result = callback(value * value);
    std::cout << "Callback result: " << result << std::endl;
  } else {
    std::cerr << "Callback is not set!" << std::endl;
  }
}
