#include <iostream>

template <typename T>
void log (T s) { std::cout << s << std::endl; }

template <typename T, typename... Args>
void log (T s, Args ...args) { std::cout << s; log(args...); }
