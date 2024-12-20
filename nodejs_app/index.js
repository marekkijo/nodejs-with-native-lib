const koffi = require('koffi');

const lib = koffi.load('../build/native_lib/Release/native_lib.dll');

// Find functions
const set_message = lib.func('void set_message(const char *)');
const get_message = lib.func('char *get_message()');
const print_message = lib.func('void print_message()');
const print_int = lib.func('void print_int(const int)');

// Call functions
print_message();
let message = get_message();
console.log(message);
set_message('Hello from Node.js');
console.log(message); // Make sure we are using copy
console.log(get_message());
print_message();
print_int(42);
