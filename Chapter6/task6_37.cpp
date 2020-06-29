#include <string>

typedef std::string (&ref_on_strArr10)[10];
ref_on_strArr10 func1();

auto func2() -> std::string (&)[10];

std::string str[10];
decltype(str) &func3();